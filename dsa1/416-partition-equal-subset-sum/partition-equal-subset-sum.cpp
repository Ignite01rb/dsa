class Solution {
public:
    bool rec(int idx,int sum,int total,vector<int>&nums,vector<vector<int>>&dp){
        if(idx==nums.size()){
            return sum == total / 2;
        }
        if(dp[idx][sum]!=-1) return dp[idx][sum];
        bool not_take=rec(idx+1,sum,total,nums,dp);
        bool take=rec(idx+1,sum+nums[idx],total,nums,dp);

        return dp[idx][sum]=not_take||take;
    }
    bool canPartition(vector<int>& nums) {
        int tsum=0;
        for(int i:nums){
            tsum+=i;
        }
        if(tsum%2!=0) return false;
        vector<vector<int>>dp(nums.size()+1,vector<int>(tsum+1,-1));
        return rec(0,0,tsum,nums,dp);
    }
};