#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> nums;
  int final;

  cout << "How many numbers in the vector?" << endl;
  cin >> final;

  for(int i = 0; i < final; ++i) {
    nums.push_back(i);
  }

  for(vector<int>::iterator i = nums.begin(); i != nums.end(); ++i) {
    cout << ' ' << *i << endl;
  }

  return 0;
}
