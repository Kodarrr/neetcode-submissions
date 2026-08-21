class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        unordered_map<int,int>mop,dp;
        int mx=0;
        for(auto it:arr)mop[it]=1;
        for(auto it:arr){
            if(dp.count(it))continue;
            int cnt=1;
            int tmp=it-1;
            while(mop[tmp]){
                if(dp.count(tmp)){
                    cnt+=dp[tmp];
                    break;
                }
                cnt++;
                dp[tmp]=-1;
                tmp--;
            }
            dp[it]=cnt;
            mx=max(mx,dp[it]);
        }
        return mx; 
        
    }
};
