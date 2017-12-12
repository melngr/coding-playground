#include <iostream>
#include <vector>

using namespace std;

int* fillarr(int arr[]) {
  for(int i = 0; i < 5; ++i) {
    arr[i] = i;
  }
  return arr;
}

int* fillvec() {
  for(int i = 0; i < vec.size(); ++i) {

  }
}

int main() {
  int empty[5];
  int *full = fillarr(empty);
  for(int i = 0; i < 5; ++i) {
    cout << full[i] << endl;
  }
}
