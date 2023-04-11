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

int main(){
    vector<int> arr = {2,5,3,77,4,1};
    bubbleSort(arr);
    for(auto i : arr){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}