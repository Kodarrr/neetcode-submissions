class Solution {
public:
    vector<int> topKFrequent(vector<int>& arr, int k) {
        map<int,int>mop;
        for(auto it:arr){
            mop[it]++;
        }
        vector<pair<int,int>>v;
        for(auto it:mop){
            v.push_back({it.second,it.first});
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(v[i].second);
        }
        return ans;
    }
};
