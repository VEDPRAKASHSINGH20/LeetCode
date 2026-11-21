class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater=0;
        int n=height.size();
        int lp=0;
        int rp=n-1;
        while(lp<rp){
                int w=rp-lp;
                int ht=min(height[rp],height[lp]);
                int ans=ht*w;
                maxWater=max(ans,maxWater);
                if(height[lp]<height[rp]? lp++:rp--);
        }
        return maxWater;
        
    }
};