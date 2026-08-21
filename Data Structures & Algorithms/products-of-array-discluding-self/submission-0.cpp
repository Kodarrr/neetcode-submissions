class Solution {
public:
    vector<int> productExceptSelf(vector<int>& arr) {
        int cnt=0;
        long long mul=1;
        for(auto it:arr){
            if(it==0)cnt++;
            else mul*=1LL*it;
        }
        vector<int>ans;
        if(cnt==0){
            for(auto it:arr){
                ans.push_back(mul/it);
            }
        }
        else if(cnt ==1){
            for(auto it:arr){
                if(it==0)
                ans.push_back(mul);
                else ans.push_back(0);
            }
        }
        else{
            for(auto it:arr){
                
                ans.push_back(0);
            }
        }


        return ans;
    }
};
