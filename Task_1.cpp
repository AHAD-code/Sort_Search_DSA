#include <iostream>
#include <string>
using namespace std;

void printInt(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printString(string arr[], int size) {
  
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
  
    cout << endl;
  
}

void selectionSortInt(int arr[], int size) {
    for(int i = 0; i < size - 1; i++) {
        int minIndex = i;

        for(int j = i + 1; j < size; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

void selectionSortString(string arr[], int size) {
    for(int i = 0; i < size - 1; i++) {
        int minIndex = i;

        for(int j = i + 1; j < size; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        string temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    int arr1[5] = {64, 25, 12, 22, 11};
    cout << "Original integer array: ";
    printInt(arr1, 5);

    selectionSortInt(arr1, 5);

    cout << "Sorted integer array: ";
    printInt(arr1, 5);

    string arr2[4] = {"apple", "orange", "banana", "grape"};
    cout << "\nOriginal string array: ";
    printString(arr2, 4);

    selectionSortString(arr2, 4);

    cout << "Sorted string array: ";
    printString(arr2, 4);

    return 0;
}
