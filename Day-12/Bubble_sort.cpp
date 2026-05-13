#include <iostream>
using namespace std;

int Bubble_sort(int nums[],int n){
    for(int i=0; i< n-1; i++){
        bool flag = false;
        for(int j=0; j< n-i-1; j++){
            if (nums[j] > nums[j+1]) {
                swap(nums[j], nums[j+1]);
                flag = true;
            }
        }
        if (!flag){
            cout<<"Array is sorted"<<endl;
            break;
        }
    }
};

int main(){
    int arr[] = {5, 1, 4, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    Bubble_sort(arr, n);
    cout<<"Sorted array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}