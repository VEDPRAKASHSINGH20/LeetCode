class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int p[1001]={false};
        int n[1001]={false};
        
        for(int i:nums){
            if(i<0) n[-i]=true;
            else p[i]=true;
            
        }
        int ma=-1;
        for(int i=0;i<1001;i++){
            if(p[i]&&n[i]) ma=max(i,ma);
        }
        
        return ma;
        

    }
};