#include<iostream>
using namespace std;
class Solution{
    public:
    int largest(vector<int> arr, int n){
        int n = arr.size();
        int maxi = -1;
        for(int i=0; i<n; i++){
            if(arr[i]>maxi){
                maxi = arr[i];
            }
            else maxi
        }
        return maxi;
    }
};

int main(){
    int arr[5] = {1,8,7,56,90};
    int largest = Solution().largest(arr, 5);
    cout<<"Largest element in the array is: "<<largest<<endl;
    return 0;

}