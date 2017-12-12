#include <iostream>
#include <string>
#include <cstdlib>


int main() {
  std::cout << "What is your first name?" << std::endl;
  std::string first;
  std::cin >> first;

  const std::string stars((first.size() + 4), '*');
  std::cout << stars << std::endl;
  for(int i = 0; i < first.size(); i++) {
    std::string blanks_1((i + 1), ' '), blanks_2(((first.size() - i) + 1), ' ');
    std::cout << '*' << blanks_1 << first[i] << blanks_2 << '*' << std::endl;
  }
  std::cout << stars << std::endl;
  exit(1);

  return 0;
}
