#include <iostream>
#include <string>
using namespace std;

int binarySearchInt(int arr[], int size, int key) {
    
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int binarySearchFloat(float arr[], int size, float key) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int binarySearchString(string arr[], int size, string key) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

void printSearchResult(int index, int key) {
    if (index != -1)
        cout << "Value " << key << " found at index " << index << endl;
    else
        cout << "Value " << key << " not found in the array." << endl;
}

void printSearchResult(int index, float key) {
    if (index != -1)
        cout << "Value " << key << " found at index " << index << endl;
    else
        cout << "Value " << key << " not found in the array." << endl;
}

void printSearchResult(int index, string key) {
    if (index != -1)
        cout << "Value " << key << " found at index " << index << endl;
    else
        cout << "Value " << key << " not found in the array." << endl;
}

int main() {
    int intArray[5] = {11, 12, 22, 25, 64};
    int intKey = 22;
    int intIndex = binarySearchInt(intArray, 5, intKey);
    printSearchResult(intIndex, intKey);

    float floatArray[4] = {0.57, 1.62, 2.71, 3.14};
    float floatKey = 2.71;
    int floatIndex = binarySearchFloat(floatArray, 4, floatKey);
    printSearchResult(floatIndex, floatKey);

    string stringArray[4] = {"apple", "banana", "grape", "orange"};
    string stringKey = "grape";
    int stringIndex = binarySearchString(stringArray, 4, stringKey);
    printSearchResult(stringIndex, stringKey);

    return 0;
}
