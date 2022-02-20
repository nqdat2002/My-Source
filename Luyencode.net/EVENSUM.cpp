#include <iostream>
#include <sstream>
#include <string>
#include <vector>
int convert_str_to_int(std::string &str) {
  int val;
  try {
    val = std::stoi(str);
  } catch (...) {
  }

  return val;
}
std::vector<int> split_string(std::string &str, int &n) {
  std::string token;
  std::stringstream ss(str);
  std::vector<int> vect{};
  int counter = 0;

  while (std::getline(ss, token, ' ')) {
    if (counter != n) {
      vect.push_back(convert_str_to_int(token));
    }
    counter += 1;
  }

  return vect;
}
int get_sum(std::vector<int> &vect) {
  int sum = 0;
  int index = 1;
  for (auto ptr = vect.begin(); ptr != vect.end(); ++ptr, ++index) {
    if (index % 2 == 0) {
      sum += *ptr;
    }
  }
  return sum;
}
int main(int argc, char *argv[]) {
  std::string str;
  std::getline(std::cin, str);
  int n = convert_str_to_int(str);
  str.clear();
  std::getline(std::cin, str);
  std::vector<int> arr = split_string(str, n);
  int sum = get_sum(arr);
  std::cout << sum << '\n';
  return 0;
}
