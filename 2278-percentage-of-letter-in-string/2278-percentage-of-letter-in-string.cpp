class Solution {
public:
    int percentageLetter(string s, char letter) {
        int c=0;
        for(char x:s){
            if(x==letter){
                c++;
            }
        }
        return (c*100)/(s.size());
        
    }
};