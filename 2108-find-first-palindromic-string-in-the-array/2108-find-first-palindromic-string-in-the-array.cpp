class Solution {
public:
    string firstPalindrome(vector<string>& w) {
        for(int i=0;i<w.size();i++){
            int l=0,r=w[i].size()-1;
            bool flag=true;
            while(l<r){
                if((w[i])[l]!=(w[i])[r]){
                    flag=false;
                    
                }
                l++;
                r--;
                
                
            }
            if (flag){
                    return w[i];
            }
        }
        return "";
        
    }
};