class Solution {
public:
    bool hasDuplicate(vector<int>& arr) {
        map<int,int>mop;
        for(auto it:arr){
            mop[it]++;
            if(mop[it]>1)return true;
        }

        return false;
        
    }
};