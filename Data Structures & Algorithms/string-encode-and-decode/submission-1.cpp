class Solution {
public:

    string encode(vector<string>& arr) {
        string ans="";
        for(auto it:arr){
            int sz=it.size();
            ans+=to_string(sz);
            ans+=';';
            ans+=it;
        }

        return ans;

    }

    vector<string> decode(string s) {
        int idx=0;
        vector<string>ans;
        cout<<s<<endl;
        while(idx<s.size()){
            // cout<<idx<<endl;
            string mew="";
            while(s[idx]!=';'){
                mew+=s[idx];
                idx++;
            }
            int kotogula=0;
            for(int i=mew.size()-1,j=1;i>=0;i--){
                kotogula+=(mew[i]-'0')*j;
                j*=10;
            }
            string tmp="";
            for(int i=1;i<=kotogula;i++){
                tmp+=s[idx+i];
            }
            idx+=kotogula+1;
            ans.push_back(tmp);
        }

        return ans;

    }
};
