class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<int>>mop;
        for(int i=0;i<strs.size();i++){
            string temp=strs[i];
            sort(temp.begin(),temp.end());
            mop[temp].push_back(i);
        }

        vector<vector<string>>ans;
        for(auto it:mop){
            vector<string>bal;
            for(auto it2:mop[it.first]){
                bal.push_back(strs[it2]);
            }

            ans.push_back(bal);
        }

        return ans;
    }
};
