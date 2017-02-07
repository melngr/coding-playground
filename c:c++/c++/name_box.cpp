#include <iostream>
#include <string>


int main() {
  std::cout << "What is your first name?" << std::endl;
  std::string first;
  std::cin >> first;

  std::string star_line((first.size() + 4), '*');
  std::string blank_line('*' + ((first.size() + 2), ' ') + '*');

  std::cout << star_line << std::endl;
  std::cout << blank_line << std::endl;
  std::cout << "* " << first << " *" << std::endl;
  std::cout << blank_line << std::endl;
  std::cout << star_line << std::endl;

  return 0;
}
