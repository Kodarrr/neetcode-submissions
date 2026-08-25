class Solution {
public:

    int dp[105]={};
    int f(vector<int>& nums,int idx)
    {
        if(idx>=nums.size()){
            return 0;
        }
        if(dp[idx]!=-1)return dp[idx];
        int ans=nums[idx] +f(nums,idx+2);
        ans=max(ans,f(nums,idx+1));

        return dp[idx]=ans;
    }
    int rob(vector<int>& nums) {
        for(int i=0;i<105;i++)dp[i]=-1;
        int ans=nums[0]+f(nums,2);
        int ans1=f(nums,1);
        return max(ans,ans1);
    }
};
