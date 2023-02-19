// Binary Search in C++
#include <iostream>
using namespace std;

int binarySearch(int array[], int target, int start, int end) {
  
  while (start <= end) {
    int mid = start + (end - start) / 2;

    if (array[mid] == target)
      return mid;

    if (array[mid] < target)
      start = mid + 1;

    else
      end = mid - 1;
  }

  return -1;
}

int main(void) {
  int array[] = {1, 3, 4, 6, 8, 12};
  int target = 4;
  int n = sizeof(array) / sizeof(array[0]);
  int result = binarySearch(array, target, 0, n - 1);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);
}