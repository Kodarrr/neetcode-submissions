class Solution {
public:
    int bs(vector<int>&arr,int l,int r,int t){
        int n=arr.size();
        // cout<<l<<' '<<r<<endl;
        while(l<r){
            int mid=(l+r)/2;
            // cout<<arr[mid]<<endl;
            if(arr[mid]==t)return mid;
            if(arr[mid]<t){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        if(arr[l]==t)return l;
        return -1;
    }
    int search(vector<int>& arr, int t) {
        int n=arr.size();
        if(arr[0]<arr[n-1]){
            return bs(arr,0,n-1,t);
        }
        int l=0,r=n-1;
        int idx=-1;
        while(l<r){
            int mid=(l+r)/2;
            if(arr[mid]==t){
                return mid;
            }

            if(arr[mid]>arr[n-1]){
                //first half e
                l=mid+1;

            }
            else{
                // second half e
                if(arr[mid]<arr[mid+1]&&arr[mid]<arr[mid-1]){
                    idx=mid;
                    break;
                }
                r=mid-1;
            }
        }

        // break point
        if(idx==-1){
            idx=l;
        }

        // cout<<idx<<endl;

        if(arr[n-1]>=t){
            return bs(arr,idx,n-1,t);
        }
        return bs(arr,0,idx-1,t);
        

    }
};
