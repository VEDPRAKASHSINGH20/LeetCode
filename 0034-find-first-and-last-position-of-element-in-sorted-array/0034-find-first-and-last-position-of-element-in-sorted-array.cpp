class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> c(2,-1);
        bool found=true;

        int st=0,end =nums.size()-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(nums[mid]==target){
                
                    c[0]=mid;
                    end=mid-1;
                    
                
            }
            else if(nums[mid]<target){
                st=mid+1;
            }
            else end=mid-1;
        }
         st=0,end =nums.size()-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(nums[mid]==target){
                
                    c[1]=mid;
                    st=mid+1;
                    
                
            }
            else if(nums[mid]<target){
                st=mid+1;
            }
            else end=mid-1;
        }
        return c;
        
        
        

        
    }
};