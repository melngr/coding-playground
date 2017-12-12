#include <iostream>
using namespace std;

int mysteryONE(int x, int y) {
  if (y == 0) {
    return x;
  }
  else {
    return mysteryONE(y, (x % y));
  }
}

int mysteryTWO(int x) {
  if (x == 0) {
    return 0;
  }
  else {
    return mysteryTWO(((x / 10) + (x % 10)));
  }
}

int mysteryTHREEa(int x);

int mysteryTHREEb(int x) {
  if (x == 0) {
    return 1;
  }
  else {
    return mysteryTHREEa((x - 1));
  }
}

int mysteryTHREEa(int x) {
  if (x == 0) {
    return 0;
  }
  else {
    return mysteryTHREEb((x - 1));
  }
}

int mysteryFOUR(int x, int y) {
  if (x == 0) {
    return 0;
  }
  else {
    return (y + mysteryFOUR((x - 1), y));
  }
}

int mysteryFIVEa(int x, int y) {
  if (x == 0) {
    return y;
  }
  else {
    return mysteryFIVEa((x / 10), ((y * 10) + (x % 10)));
  }
}

int mysteryFIVEb(int x) {
  return mysteryFIVEa(x, 0);
}

int mysterySIX(int x) {
  if (x == 0) {
    return 1;
  }
  else {
    return (x * mysterySIX((x - 1)));
  }
}

int main() {
  cout << mysteryTWO(20) << endl;
}
