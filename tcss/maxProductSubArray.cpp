/*
Maximum Product Subarray in an Array
Problem Statement: Given an array that contains both negative and positive integers, find the maximum product subarray.

Examples:

Example 1:
Input:
 Nums = [1,2,3,4,5,0]
Output:
 120
Explanation:
 In the given array, we can see 1×2×3×4×5 gives maximum product value.


Example 2:
Input:
 Nums = [1,2,-3,0,-4,-5]
Output:
 20
Explanation:
 In the given array, we can see (-4)×(-5) gives maximum product value.
*/ 


#include<bits/stdc++.h>
using namespace std;

// Method 1: 
// TC: O(n*n)
// SC: O(1)
void maxProductSubArray(vector<int>& nums){
    int n = nums.size();
    int max_product = 1;
    
    vector<int>ans;
    for(int i=0; i<n; i++){
        int curr_product = 1;
        for(int j=i; j<n; j++){
            curr_product = curr_product * nums[j];
            max_product = max(curr_product, max_product);
            if(curr_product >= max_product ){
                ans.push_back(nums[j]);
            }
        }
    }
    for(auto i:ans){
        cout<<i<<" ";
    }
    // return max_product;
}

int main() {
    vector<int> nums = {2,6,-4,5,1};
    // cout<<"The maximum product subarray: "<<maxProductSubArray(nums);
    maxProductSubArray(nums);
    return 0;
}