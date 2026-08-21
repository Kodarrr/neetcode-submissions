class Solution {
public:
    int findMin(vector<int> &arr) {
        int n=arr.size();
        if(arr[0]<arr[n-1]){
            //all okay
            return arr[0];
        }

        int l=0,r=n-1;
        while(l<r){
            int mid=(l+r)/2;
            // cout<<l<<' '<<r<<endl;

            //check
            if(arr[mid]>arr[n-1]){
                // first half e
                l=mid+1;
                
            }
            else{
                //2nd half
                //check if this is the one
                if(arr[mid]<arr[mid-1]&&arr[mid]<arr[mid+1]){
                    return arr[mid];
                }
                else{
                    r=mid-1;
                }
            }

        }

        return arr[l];
    }
};
