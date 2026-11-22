class Solution {
public:
int u(int m,int n,int im,int in, vector<vector<int>>&dp){
    if( im>=m || in>=n) {
        return 0;

    }
    if( im==m-1 || in==n-1) {
        return 1;

    }
    if(dp[im][in]!=-1) return dp[im][in];
    int r=u(m,n,im,in+1,dp);
    int d=u(m,n,im+1,in,dp);
    return dp[im][in]= r+d;

}
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return u(m,n,0,0,dp);
        
    }
};