class Solution {
public:
void subset(vector<int>&nums,vector<int>&ans,int i,vector<vector<int>>&big){
    if(i==nums.size()){
        big.push_back({ans});
        return;
    }
    ans.push_back(nums[i]);
    subset(nums,ans,i+1,big);
    ans.pop_back();
    subset(nums,ans,i+1,big);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>ans;
        vector<vector<int>>big;
        subset(nums,ans,0,big);
        return big;
    }
};