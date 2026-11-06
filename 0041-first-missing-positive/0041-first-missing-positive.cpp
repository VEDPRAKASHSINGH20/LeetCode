class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int s=1;
       
        for(int num:nums){
            if(num==s){
                s++;
            }
            
        }
        return s;
    }
};