class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        vector<int> n3;
        for(int i=0;i<n;i++){
            n3.push_back(nums1[i]);
        }
        n=nums2.size();
        for(int i=0;i<n;i++){
            n3.push_back(nums2[i]);
        }
        sort(n3.begin(),n3.end());
        n=n3.size();
        if(n%2==0){
            int a=n/2 ,b=n/2-1;
            double c=(n3[a]+n3[b])/2.0;
            return c;

        }
        else{
            int a=n/2;
            return (n3[a]);
        }
        return 0.0;

        
    }
};