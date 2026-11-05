class Solution {
public:
    int countElements(vector<int>& nums) {
        int mn=*min_element(nums.begin(),nums.end());
        int mx=*max_element(nums.begin(),nums.end());
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>mn && nums[i]<mx){
                c++;
            }
        }
        return c;
        
    }
};