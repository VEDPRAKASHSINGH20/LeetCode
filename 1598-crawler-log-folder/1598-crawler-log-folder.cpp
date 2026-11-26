class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string>st;
        for(string i:logs){
            if(i!="./" && i!="../") st.push(i);
            else if(i=="../" && !st.empty()) st.pop();
            
        }
        return st.size();
        
    }
};