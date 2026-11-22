class Solution {
public:
    bool checkString(string s) {
        bool t=true;
        for(char i:s){
            if(i=='b') t=false;
            else if(!t && i=='a') return false;
        }
        return true;
        
    }
};