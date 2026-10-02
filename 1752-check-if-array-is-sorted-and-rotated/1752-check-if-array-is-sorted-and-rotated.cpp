class Solution {
public:
    bool check(vector<int>& nums) {
        int num=0,n=nums.size();
        for(int i=0;i<nums.size();i++){
            if(nums[i]>nums[(i+1)%n]){
                num++;
            }
        }
        return num<=1;
        
    }
};