#include<iostream>
#include<vector>

using namespace std;

void bubbleSort(vector<int> &arr) {
    int n = arr.size();
    bool swapped;
    
    for (int i = 0; i < n-1; i++) {
        swapped = false;
        
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if (swapped == false) {
            break;
        }
    }
}


int binarySearch(vector<int> &arr, int target) {
    bubbleSort(arr);
    int left = 0;
    int right = arr.size() - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return -1;
}

int main() {
    vector<int> numbers = { 1, 3, 5, 7, 9, 11, 13, 15 };
    int searchValue = 7;
    int index = binarySearch(numbers, searchValue);
    if (index != -1) {
        cout << searchValue << " was found at index " << index << " in the vector." << endl;
    } else {
        cout << searchValue << " was not found in the vector." << endl;
    }
    
    return 0;
}