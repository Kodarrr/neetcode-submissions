class Solution {
public:
    bool isValid(string s) {
        map<char,int>mop;
        mop['{']=2;
        mop['(']=1;
        mop['[']=3;

        mop['}']=-2;
        mop[')']=-1;
        mop[']']=-3;

        stack<int>st;
        for(auto it:s){
            if(mop[it]>0){
                st.push(mop[it]);
            }
            else{
                if(st.empty()||st.top()!=-mop[it])return false;
                else{
                    st.pop();
                }
            }
        }

        if(st.size())return false;

        return true;
    }
};
