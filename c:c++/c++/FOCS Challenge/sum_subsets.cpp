/*
   Author:   Griffin Melnick
   File:     sum_subsets.cpp
   Purpose:
*/

#include <fstream>
#include <iostream>
#include <map>
#include <set>
#include <string>

using namespace std;
typedef unsigned int uint;
typedef unsigned long long ullong;

// ----------------------------------------------------------------
// ----------------------------------------------------------------

int main() {
  fstream file("numbers.txt");
  if (!file.is_open()) { cerr << "File could not be opened" << endl;  return -1; }
  else if (file.bad()) { cerr << "File is bad" << endl;  return -1; }
  else {
    map<ullong, set<ullong> > subsets;
    set<ullong> nums;
    string line = "";
    ullong temp = 0;

    while (getline(file, line)) {
      temp = stoull(line);
      nums.insert(temp);
    }

    if (nums.size() > 0) { cout << "Hi" << endl; }
  }
}
