class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int t) {
        map<int,vector<int>>mop;
        for(int i=0;i<arr.size();i++){
            mop[arr[i]].push_back(i);

        }

        for(auto it:arr){
            // mop[it]--;
            int rem=t-it;
            if(it==rem){
                if(mop[it].size()>=2){
                    return{mop[it][0],mop[it][1]};
                }
            }
            else{
                if(mop.count(rem)){
                    return{mop[it][0],mop[rem][0]};
                }
            }
        }

        return {0,0};
    }
};
