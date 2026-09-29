class Solution {
public:
    string process(string s){
        stack<char>st;
        string ans;
        for(char c:s){
            if( c=='#') {
                if(!st.empty()){

                
                st.pop();
                }
            }
            else{
                st.push(c);
            }
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    bool backspaceCompare(string s, string t) {
        if(process(s)==process(t)) return true;
        return false;

        
    }
};