#include <iostream>
#include <string>

int MaxValue(const int &a, const int &b, const int &c) {
  return std::max(std::max(a, b), c);
}

int main() {
  const std::string kAdriansSequence = "ABC";
  const std::string kBrunosSequence  = "BABC";
  const std::string kGoransSequence  = "CCAABB";

  int num_questions;
  std::cin >> num_questions;

  char correct_answers[num_questions];
  std::cin >> correct_answers;

  int adrians_correct_answers = 0;
  int brunos_correct_answers  = 0;
  int gorans_correct_answers  = 0;
  for (int i = 0; i < num_questions; ++i) {
    if (correct_answers[i] == kAdriansSequence[i%3])
      adrians_correct_answers++;

    if (correct_answers[i] == kBrunosSequence[i%4])
      brunos_correct_answers++;

    if (correct_answers[i] == kGoransSequence[i%6])
      gorans_correct_answers++;
  }

  int max_correct_answers = MaxValue(adrians_correct_answers, brunos_correct_answers, gorans_correct_answers);
  std::cout << max_correct_answers << std::endl;

  if (adrians_correct_answers == max_correct_answers)
    std::cout << "Adrian" << std::endl;

  if (brunos_correct_answers == max_correct_answers)
    std::cout << "Bruno" << std::endl;

  if (gorans_correct_answers == max_correct_answers)
    std::cout << "Goran" << std::endl;

  return 0;
}
