class Solution {
public:

    int rob(vector<int>& nums) {
        int dp[105]={};
        int n=nums.size();
        dp[0]=nums[0];
        if(n>=2)
        {   dp[1]=max(nums[1],dp[0]);
            for(int i=2;i<nums.size();i++){
                dp[i]=max(nums[i]+dp[i-2],dp[i-1]);
                // cout<<dp[i]<<' ';
            }
        }
        return dp[n-1];
    }
};
