#include<iostream>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        int m = needle.length();
        for(int i = 0; i<=n-m; i++)
        {
            string sub = haystack.substr(i,m);
            if(sub == needle){
                return i;
            }
        }
        return -1;
    }
};
int main(){
    string haystack = "hello";
    string needle = "ll";
    Solution sol;
    int ans = sol.strStr(haystack, needle);
    cout<<"Needle found at index: "<<ans<<endl;
    return 0;
}