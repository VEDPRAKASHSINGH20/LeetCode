class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n=cost.size();
        int l=n/3;

        sort(cost.begin(),cost.end(),greater<int>());
        int c=0;
        int sum=0;
        for(int i=0;i<l*3;i++){
                if(i%3!=2){
                    c+=cost[i];
                }
            
        }
        
        int idx=n%3;
        while(idx>0){
                c+=cost[n-idx];
                idx--;
        }
        
        return c;
       
        
    }
};