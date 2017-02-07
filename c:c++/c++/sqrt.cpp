#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
  vector<double> roots(100);
  for(int i = 0; i < roots.size(); ++i) {
    roots[i] = sqrt((i + 1));
  }

  cout << "Pick a number 1 - 100 to see the squareroot of." << endl;
  int pick;
  cin >> pick;

  cout << roots[(pick - 1)] << endl;

  return 0;
}
