#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>

class CardDeck {
public:
  CardDeck(const char* cards) : p(new bool[13]), k(new bool[13]), h(new bool[13]), t(new bool[13]) {
    char suit;
    int number;
    for (int i = 0; i < std::strlen(cards); i += 3) {
      std::sscanf(cards + i, "%c%d", &suit, &number);
      if (IsDublicate(suit, number)) {
        greska = true;
      } else {
        AddCard(suit, number);
      }
    }
  }

  ~CardDeck() {
    delete[] p;
    delete[] k;
    delete[] h;
    delete[] t;
  }

  bool IsGreska() const {
    return greska;
  }

  int NumCards(const char suit) const {
    switch (suit) {
      case 'P':
        return CountCards(p);
      case 'K':
        return CountCards(k);
      case 'H':
        return CountCards(h);
      case 'T':
        return CountCards(t);
    }
  }

private:
  void AddCard(const char suit, const int number) {
    switch (suit) {
      case 'P':
        p[number-1] = true;
        break;
      case 'K':
        k[number-1] = true;
        break;
      case 'H':
        h[number-1] = true;
        break;
      case 'T':
        t[number-1] = true;
        break;
    }
  }

  bool IsDublicate(const char suit, const int number) const {
    switch (suit) {
      case 'P':
        return p[number-1];
      case 'K':
        return k[number-1];
      case 'H':
        return h[number-1];
      case 'T':
        return t[number-1];
    }
  }

  int CountCards(const bool * cards) const {
    int count = 0;
    for (int i = 0; i < 13; ++i) {
      if (cards[i]) {
        count++;
      }
    }
    return count;
  }

  bool greska;

  // Arrays used to check if card isn't unique
  bool * p;
  bool * k;
  bool * h;
  bool * t;
};

void PrintMissingCards(const CardDeck * cards) {
  char suits[4] = {'P', 'K', 'H', 'T'};
  int missing[4];
  for (int i = 0; i < 4; ++i) {
    missing[i] = 13 - cards->NumCards(suits[i]);
  }

  std::cout << missing[0] << " " << missing[1] << " " << missing[2] << " " << missing[3] << std::endl; 
}

int main() {
  char card_labels[1000];
  std::cin >> card_labels;

  CardDeck * cards = new CardDeck(card_labels);
  if (cards->IsGreska()) {
    std::cout << "GRESKA" << std::endl;
  } else {
    PrintMissingCards(cards);
  }
}
