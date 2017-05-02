#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

int main() {
  std::string player_cards;
  std::cin >> player_cards;

  int num_cards[3] = {0};
  for (char& card : player_cards) {
    if (card == 'T')
      num_cards[0]++;

    if (card == 'C')
      num_cards[1]++;

    if (card == 'G')
      num_cards[2]++;
  }

  int total_points = 0;
  for (int& i : num_cards)
    total_points += std::pow(i, 2);

  // Find the lowest number of card
  int lowest_card_num = std::min(std::min(num_cards[0], num_cards[1]), num_cards[2]);

  std::cout << total_points + 7 * lowest_card_num << std::endl;

  return 0;
}
