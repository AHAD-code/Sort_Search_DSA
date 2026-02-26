#include <iostream>
#include <string>
using namespace std;

int linearSearchInt(int arr[], int size, int key) {
    
    for(int i = 0; i < size; i++) {
        
        if(arr[i] == key) {
            
            return i;
            
        }
    }
    return -1;
}

int linearSearchFloat(float arr[], int size, float key) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int linearSearchString(string arr[], int size, string key) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == key) {
            return i;
        }
    }
    return -1;
}

void printSearchResult(int index, string key) {
    if(index != -1)
        cout << "Value " << key << " found at index " << index << endl;
    else
        cout << "Value " << key << " not found in the array." << endl;
}

void printSearchResult(int index, int key) {
    if(index != -1)
        cout << "Value " << key << " found at index " << index << endl;
    else
        cout << "Value " << key << " not found in the array." << endl;
}

void printSearchResult(int index, float key) {
    if(index != -1)
        cout << "Value " << key << " found at index " << index << endl;
    else
        cout << "Value " << key << " not found in the array." << endl;
}

int main() {
    int intArray[5] = {64, 25, 12, 22, 11};
    int intKey = 12;
    int intIndex = linearSearchInt(intArray, 5, intKey);
    printSearchResult(intIndex, intKey);

    float floatArray[4] = {3.14, 2.71, 1.62, 0.57};
    float floatKey = 1.62;
    int floatIndex = linearSearchFloat(floatArray, 4, floatKey);
    printSearchResult(floatIndex, floatKey);

    string stringArray[4] = {"apple", "orange", "banana", "grape"};
    string stringKey = "banana";
    int stringIndex = linearSearchString(stringArray, 4, stringKey);
    printSearchResult(stringIndex, stringKey);

    return 0;
}
