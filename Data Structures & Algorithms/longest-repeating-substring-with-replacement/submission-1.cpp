class Solution {
public:
    int characterReplacement(string s, int k) {

        map<char,int>mop;
        for(auto it:s){
            mop[it]++;
        }

        int n=s.size();

        
        int mx=0;
        for(char x='A';x<='Z';x++){
            if(!mop.count(x))continue;
            int tmp=k;
            
            int i=0,j=0;
            for(;j<n;){
                if(s[j]==x){
                    mx=max(mx,j-i+1);
                    j++;

                }
                else{
                    if(tmp>0){
                        mx=max(j-i+1,mx);
                        tmp--;
                        j++;
                    }
                    else{
                        while(tmp==0){
                            if(s[i]!=x){
                                tmp++;
                            }
                            i++;
                            
                        }
                    }
                }
            }

            cout<<mx<<endl;

        }

        // cout<<mx<<endl;
        return mx;
        
    }
};
