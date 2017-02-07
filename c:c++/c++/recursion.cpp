#include <iostream>

using namespace std;
typedef unsigned int uint;


// =======================================================================
// =======================================================================


int factorial(int n) {
  return 0;
}

int recur_fibonacci(int n) {
  if (n == 0) { return 0; }
  else if (n == 1) { return 1; }
  else { return (recur_fibonacci(n - 1) + recur_fibonacci(n - 2)); }
}

int iter_fibonacci(int n) {
  int fib = 0;
  for (int i = 0; i < n; ++i) {
    if (i == 0) { fib += 0; }
    else if (i == 1) { fib += 1; }
    else { fib = (fib - 1) + (fib - 2); }
  }
  return fib;
}

int memoi_fibonacci(int n) {
  return 0;
}

// =======================================================================

int main() {
  int to_fib;
  cout << "Please enter a number of which to find the Fibonacci value." << endl;
  cin >> to_fib;

  cout << "Finding Fibonacci number iteratively..." << endl;
  cout << iter_fibonacci(to_fib) << endl;
  return 0;
}
