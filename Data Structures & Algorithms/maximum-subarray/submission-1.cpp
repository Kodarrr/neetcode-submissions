class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int sum=0,ans=0,cnt=0;
        for(int i=0;i<n;i++){
            if(nums[i]<0)cnt++;
            sum+=nums[i];
            if(sum<0)sum=0;
            ans=max(ans,sum);
        }
        if(cnt==n){
            int mx=-100000;
            for(int i=0;i<n;i++){
                mx=max(mx,nums[i]);
            }
            return mx;
        }
        return ans;
    }
};
