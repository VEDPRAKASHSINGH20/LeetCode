class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        int freq=0;
        for(int i=0;i<n-1;i++){
            if(nums[i]!=nums[i+1]){
                freq++;
                ans.push_back(nums[i]);
            }
            else{
                continue;
            }

        }
        ans.push_back(nums[n-1]);
        freq++;
        nums=ans;
        return freq;
        
    }
};