class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int b1=INT_MIN,b2=INT_MIN,b3=INT_MIN;
        int sm1=INT_MAX,sm2=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>b1){
                b3=b2;
                b2=b1;
                b1=nums[i];
            }
            else if(nums[i]>b2){
                b3=b2;
                b2=nums[i];
            }
            else if(nums[i]>b3) b3=nums[i];
            if(nums[i]<sm1){
                sm2=sm1;
                sm1=nums[i];
            }
            else if(nums[i]<sm2) sm2=nums[i];
        }
        return max(sm1*sm2*b1,b1*b2*b3);
        
    }
};