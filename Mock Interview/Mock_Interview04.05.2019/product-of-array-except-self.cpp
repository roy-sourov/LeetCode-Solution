//https://leetcode.com/problems/product-of-array-except-self/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> output(n,0);
        output[0]=1;
        int left=1,right=1;
        for(int i=1;i<n;i++){
            left=left*nums[i-1];
            output[i]=left;
        }
        
        for(int i=n-2;i>=0;i--){
            right=right*nums[i+1];
            output[i]=output[i]*right;
        }
        
        return output;
    }
};
