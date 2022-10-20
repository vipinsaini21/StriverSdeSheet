#include <bits/stdc++.h> 
#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
    // Write your code here 
    sort(arr.begin(),arr.end());
    int a,b;
    for(int i=0;i<n;i++){
        if(i>0){
            if(arr[i]==arr[i-1]){
                b=arr[i];
                break;
            }
        }
    }
    int x = 1;
    for(int i=0;i<n;i++){
        if(i == n-1){
            a = n;
        }
        if(i < b){
            if(arr[i] - i != x){
                a = i+1;
                break;
            }
        }
        else if(i > b){
            if(arr[i] - i != 0 ){
                a = i;
                break;
            }
        }
    }
    return {a,b};
}