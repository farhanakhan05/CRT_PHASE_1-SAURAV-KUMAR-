#include<iostream>
using namespace std;
int linearSearch(int nums[], int n, int target){
    for(int i=0; i<n; i++){
        if(nums[i] == target){
            return i;
        }
    }
    return -1;//element not found
};
int main(){
    int nums[] ={1,2,3,4,5};
    int target = 3;
    int size = sizeof(nums)/sizeof(nums[0]);
    int ans = linearSearch(nums, size, target);
    cout<<"Element found at index: "<<ans<<endl;
    return 0;

}