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
    int idx=i+1;
    while(idx<nums.size() && nums[idx]==nums[idx-1]) idx++;

    subset(nums,ans,idx,big);
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        vector<vector<int>>big;
        subset(nums,ans,0,big);
        return big;
        
    }
};