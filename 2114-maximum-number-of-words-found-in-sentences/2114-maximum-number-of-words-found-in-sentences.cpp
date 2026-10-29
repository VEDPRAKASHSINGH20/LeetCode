class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        int mx=0;
        for(int i=0;i<s.size();i++){
            int c=0;
            for(char x:s[i]){
                if(x==' ')c++;
            }
            c++;
            mx=max(c,mx);
        }
        return mx;

        
    }
    
};