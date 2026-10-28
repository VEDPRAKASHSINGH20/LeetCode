class Solution {
public:
    string reversePrefix(string word, char ch) {
        int idx=0,l=0;
        for(int i=0;i<word.size();i++){
            if(word[i]==ch){
                idx=i;
                break;
            }   
        }
        if( idx==0) return word;
        string s="";
        for(int i=idx;i>=0;i--){
            s+=word[i];
        }
        for(int i=idx+1;i<word.size();i++){
            s+=word[i];
        }
        return s;
        
    }
};