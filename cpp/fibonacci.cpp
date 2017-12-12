#include <iostream>

using namespace std;
typedef unsigned int uint;

uint recursive_fibonacci(uint n) {
  if (n == 0) { return 0; }
  else { return (n + (recursive_fibonacci(n - 1))); }
}

int main() {
  uint fib = recursive_fibonacci(3);
  cout << fib << endl;
  return 0;
}
