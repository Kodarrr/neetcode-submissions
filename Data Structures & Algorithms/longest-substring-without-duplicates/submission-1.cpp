class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int i=0,j=0;
        unordered_map<char,int>mp;
        int mx=0;
        for(;j<n;j++){
            mp[s[j]]++;
            if(mp.size()==j-i+1){
                mx=max(mx,j-i+1);
            }
            else{
                while(mp.size()!=j-i+1){
                    mp[s[i]]--;
                    if(mp[s[i]]==0)mp.erase(s[i]);
                    i++;
                }
            }
        }

        return mx;
        
    }
};
