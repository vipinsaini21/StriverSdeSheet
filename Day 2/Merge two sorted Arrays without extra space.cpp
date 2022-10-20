Link 1 : 

#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
        int i = m -1;
        int j = n -1;
        int k = n + m -1;
        while(i >= 0 && j >= 0)
            if(arr1[i]>arr2[j])
                arr1[k--] = arr1[i--];
            else
                arr1[k--] = arr2[j--];
        while(j>=0)
            arr1[k--]=arr2[j--];
    return arr1;
}

Link 2 :

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int i = m -1;
        int j= n -1;
        int k= n + m -1;
        while(i >= 0 && j >= 0){
            if(nums1[i]>nums2[j]){
                nums1[k--] = nums1[i--];
            }
            else {
                nums1[k--] = nums2[j--];
            }
        }
        while(j>=0){
            nums1[k--]=nums2[j--];
        }
    }
};