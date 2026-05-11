#include<iostream>
using namespace std;
int Binary_search(int nums[], int n, int target){
    int l=0;
    int r=n-1;
    while(l<=r)
    {
        int mid = l+(r-l)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]>target){
            l = mid+1;
        }
        else{
            r = mid-1;
        }
        }
    return -1;//element not found
};
int main(){
    int nums[] ={1,2,3,4,5};
    int target = 3;
    int size = sizeof(nums)/sizeof(nums[0]);
    int ans = Binary_search(nums, size, target);
    cout<<"Element found at index: "<<ans<<endl;
    return 0;
        }
