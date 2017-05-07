#include <iostream>
#include <unordered_map>
#include <string>

class UserRegistry {
public:
  void UserEntered(const std::string& user) {
    RegisterUserAction(user, "entered");    
  }

  void UserExited(const std::string& user) {
    RegisterUserAction(user, "exited");
  }

private:
  void LogAction(const std::string& user, const std::string& action, bool is_anomaly = false) {
    std::cout << user << " " << action << (is_anomaly ? " (ANOMALY)" : "") << std::endl;
  }

  void RegisterUserAction(const std::string& user, const std::string& action) {
    bool anomaly = false;
    if (action == "entered" && registry[user] % 2 == 1) {
      anomaly = true;
    }

    if (action == "exited" && registry[user] % 2 == 0) {
      anomaly = true;
    }

    if (!anomaly) {
      registry[user]++;
    }

    LogAction(user, action, anomaly);
  }

private:
  std::unordered_map<std::string, int> registry;
};

int main() {
  UserRegistry registry;
  int log_length;
  std::cin >> log_length;
  for (int i = 0; i < log_length; ++i) {
    std::string user, action;
    std::cin >> action >> user;

    if (action == "entry") {
      registry.UserEntered(user);
    } else if (action == "exit") {
      registry.UserExited(user);
    }
  }

  return 0;
}
