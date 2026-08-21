class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int t) {
        map<int,int>mop;
        for(int i=0;i<arr.size();i++){
            int rem=t-arr[i];
            if(mop.count(rem)){
                return{mop[rem],i};
            }
            mop[arr[i]]=i;
        }

        return{0,0};
    }
};
