class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int mn=nums[0]-0;
        if(mn<0) mn=-1*mn;
        
        for(int i=1;i<nums.size();i++){
            if(nums[i]<0){
                mn=min(mn,0-nums[i]);
            }else mn=min(mn,nums[i]-0);
        }
        int c=0,ele;
        for(int i=0;i<nums.size();i++){
            if(nums[i]-0==mn || 0-nums[i]==mn){
                
                c++;
                if(c>1){
                    ele=max(ele,nums[i]);
                } else ele=nums[i];
            }
        }
        return ele;
        int ans=nums[0];
        for(int i = 1; i < nums.size(); i++) {
            if(abs(nums[i]) < abs(ans)) {
                ans = nums[i];
            }
            else if(abs(nums[i]) == abs(ans) && nums[i] > ans) {
                ans = nums[i];
            }
        }
    }
};