class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]>='A'&&s[i]<='Z')s[i]=tolower(s[i]);
        }
        int i=0,j=n-1;
        while(i<j){
            
            while(i<j&&!((s[i]>='a'&&s[i]<='z')||(s[i]>='0'&&s[i]<='9')))i++;
            while(i<j&&!((s[j]>='a'&&s[j]<='z')||(s[j]>='0'&&s[j]<='9')))j--;
            // cout<<i<<' '<<j<<endl;
            if(i>=j)break;
            if(s[i]!=s[j])return false;
            i++;
            j--;
        }
        return true;
    }
};
