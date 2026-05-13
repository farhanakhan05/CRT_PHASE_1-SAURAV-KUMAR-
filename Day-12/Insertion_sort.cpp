#include <iostream>
using namespace std;
void Insertion_sort(int nums[], int n){
    for(int i =1; i<n; i++){
        int key = nums[i];
        int j=i-1;
        while(j>=0 && nums[j]>key){
            nums[j+1]=nums[j];
            j--;
        }
        nums[j+1]=key;
    }
};
int main(){
    int arr[]={12, 11, 13, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    Insertion_sort(arr, n);
    cout<<"Sorted array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}