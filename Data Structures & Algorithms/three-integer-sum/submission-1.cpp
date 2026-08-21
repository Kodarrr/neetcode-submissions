class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        vector<vector<int>>ans;
        map<pair<int,int>,int>mop;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(mop.count({arr[i],arr[j]})){
                    continue;
                }
                mop[{arr[i],arr[j]}]++;
                int x=-(arr[i]+arr[j]);
                auto it=binary_search(arr.begin()+j+1,arr.end(),x);
                // if(arr[i]==-2&&arr[j]==1){
                //     cout<<x<<' '<<it<<endl;
                // }
                // cout<<arr[i]<<' '<<arr[j]<<endl;
                if(it){
                    ans.push_back({arr[i],arr[j],x});
                    // break;
                }
            }
        }

        return ans;
        
    }
};
