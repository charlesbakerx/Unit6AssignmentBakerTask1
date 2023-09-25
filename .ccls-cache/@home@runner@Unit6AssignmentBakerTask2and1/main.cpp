/*
Charles Baker, Programming Fundamentals I: COSC-1436-57001
IDE: Replit
Summary:
*/
// #include <cstdlib>
#include <iostream>
#include "accounts.h"
using namespace std;

void sortArray(int array[], int size);
void printArray(int array[], int size);

int main() {
  return 0;
}

void sortArray(int array[], int size) {
  bool swapped;
  for (int i = 0; i < size - 1; i++) {
        swapped = false;
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] < array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swapped = true;
            }
        } if (!swapped) break;
    }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i];
    if (i != size - 1) {
      cout << ", ";
    }
  }
  cout << endl;
}