#include <iostream>
#include <algorithm>

// Returns invitation id of the guest who is alone
int FindOddGuest(const int * invitation_codes, const int& num_guests) {
  for (int j = 0; j < num_guests - 1; j += 2) {
    if (invitation_codes[j] != invitation_codes[j+1]) {
      return invitation_codes[j];
    }
  }

  return invitation_codes[num_guests-1];
}

int main() {
  int num_test_cases;
  std::cin >> num_test_cases;

  for (int i = 0; i < num_test_cases; ++i) {
    int num_guests;
    std::cin >> num_guests;

    int invitation_codes[num_guests];
    for (int j = 0; j < num_guests; ++j)
      std::cin >> invitation_codes[j];

    std::sort(invitation_codes, invitation_codes + num_guests);
    std::cout << "Case #" << i + 1 << ": " << FindOddGuest(invitation_codes, num_guests) << std::endl;
  }

  return 0;
}
