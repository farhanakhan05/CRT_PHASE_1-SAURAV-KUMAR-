#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int total_sum = (n*(n+1))/2;
        int actual_sum = 0;
        for(int i=0; i<n; i++)
        {
            actual_sum +=nums[i];
        }
        return total_sum - actual_sum;
    }
};
int main(){
    vector<int> nums = {0,1,2,3,4,5,6,7,9,10};
    Solution sol;
    int missing_num = sol.missingNumber(nums);
    cout<<"The missing number is: "<<missing_num<<endl;
    return 0;
}