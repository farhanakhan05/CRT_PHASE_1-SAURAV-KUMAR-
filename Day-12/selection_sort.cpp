#include <iostream>
using namespace std;
void selection_sort(int nums[], int n){
    for(int i=0; i<n-1; i++){
        int mini = i;
        for(int j=i+1; j<n; j++){
            if(nums[mini]>nums[j]){
                mini = j;
            }
        }swap(nums[i], nums[mini]);

    }
};
int main(){
    int arr[]={64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr, n);
    cout<<"Sorted array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}