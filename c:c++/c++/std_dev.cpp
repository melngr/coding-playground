#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float find_average(float nums[], int size) {
  float sum = 0;
  for(int i = 0; i < size; i++) {
    sum += nums[i];
  }
  return (sum / size);
}

float std_dev(float nums[], int size, float avg) {
  float devs[size];
  float sum = 0;
  for(int i = 0; i < size; i++) {
    devs[i] = pow((nums[i] - avg), 2.0);
    sum += devs[i];
  }
  return sqrt((sum / size));
}

int main() {
  // take in data set size
  cout << "How many numbers in the data set?" << endl;
  int size;
  cin >> size;

  // create array with data set
  cout << "\nEnter " << size << " numbers to take the average." << endl;
  float nums[size];
  for(int i = 0; i < size; i++) {
    cin >> nums[i];
  }

  // cout << "\nAverage of the data set is: " << setprecision(3) << fixed << find_average(nums, size) << endl;
  cout << "\nStandard deviation of the data set is: " << setprecision(3) << fixed << std_dev(nums, size, find_average(nums, size));

  return 0;
}
