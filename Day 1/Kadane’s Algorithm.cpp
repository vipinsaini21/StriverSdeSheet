Link 1 :

#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    int long long sum = 0;
    int long long maximum = INT_MIN;
    for(int i=0;i<n;i++){
        sum = sum + arr[i];
        if(sum<0)
            sum=0;
        maximum = max(sum,maximum);
    }
    return maximum;
}

Link 2 :

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maximum = INT_MIN;
        for(auto it : nums){
            sum+=it;
            maximum = max(sum,maximum);
            if(sum<0)
                sum=0;
        }
        return maximum;
    }
};