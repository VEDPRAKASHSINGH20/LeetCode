class Solution {
public:
    void getP(vector<int>&num,int idx,vector<vector<int>>&ans){
        if(idx==num.size()){
            ans.push_back(num);
            return;
        }
        for(int i=idx;i<num.size();i++){
            swap(num[idx],num[i]);
            getP(num,idx+1,ans);
            swap(num[idx],num[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        getP(nums,0,ans);
        return ans;
        
    }
};