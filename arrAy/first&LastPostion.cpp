#include <iostream>
#include <vector>

using namespace std;

// Binary search to find the first occurrence of target
int findFirstOccurrence(const vector<int>& arr, int target) {
  int left = 0;
  int right = arr.size() - 1;
  int result = -1;

  while (left <= right) {
    int mid = left + (right - left) / 2;

    if (arr[mid] == target) {
      result = mid;
      right = mid - 1; // Search in the left half for the first occurrence
    } else if (arr[mid] < target) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }

  return result;
}

// Binary search to find the last occurrence of target
int findLastOccurrence(const vector<int>& arr, int target) {
  int left = 0;
  int right = arr.size() - 1;
  int result = -1;

  while (left <= right) {
    int mid = left + (right - left) / 2;

    if (arr[mid] == target) {
      result = mid;
      left = mid + 1; // Search in the right half for the last occurrence
    } else if (arr[mid] < target) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }

  return result;
}

int main() {
  // Sorted array
  vector<int> myArray = {1, 2, 3, 3, 3, 4, 4, 5, 5, 6, 7, 8, 9};

  // Value to search
  int target = 3;

  // Find shortest first and last positions of the target value using binary search
  int firstPos = findFirstOccurrence(myArray, target);
  int lastPos = findLastOccurrence(myArray, target);

  // Print the results
  if (firstPos != -1 && lastPos != -1) {
    cout << "Shortest first position of " << target << ": " << firstPos << endl;
    cout << "Shortest last position of " << target << ": " << lastPos << endl;
  } else {
    cout << "Value not found in the array." << endl;
  }

  return 0;
}



