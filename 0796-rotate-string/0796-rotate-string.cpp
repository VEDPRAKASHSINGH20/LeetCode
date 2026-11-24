class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return false;
        s+=s;
        int y=s.find(goal);
        return y!=-1;
        
    }
};