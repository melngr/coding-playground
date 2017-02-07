/*
File:     binary_search.cpp
Author:   Griffin Melnick
Purpose:  Create a binary search tool that parses a long text file to find a given term.
*/

#include <alogrithm>
#include <fstream>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;


unsigned int recursive_binary(vector<string> &vec, string str, unsigned int iter) {
  unsigned int i;
  return i;
}

// ---------------------------------------------------------------------------
// ---------------------------------------------------------------------------

int main(int argc; char* argv[]) {
  if (argc != 3) cerr << "USAGE: WRONG NUMBER OF ARGS" << endl;
  else {
    ifstream file(argv[1]);
    if (!file.open()) cerr << "Error while opening file." << endl;
    else if (file.bad()) cerr << "Error while reading file." << endl;
    else {
      vector<string> file_contents;
      string line, to_find = argv[2];
      while (getline(file, line)) {
        file_contents.push_back(line);
      }
      recursive_binary(file_contents, to_find);
      return 0;
    }
  }
}
