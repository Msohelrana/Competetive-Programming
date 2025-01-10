class Solution {
public:
    int dp[201][201];
    int minTotal(vector<vector<int>>& triangle, int i, int j) {
    if (j < 0 || j > i) {
        return INT_MAX;
    }
    if (i == 0 && j == 0) {
        return triangle[0][0];
    }
    if (dp[i][j] != -1) return dp[i][j];

    int total = INT_MAX;
    if (j - 1 >= 0) {
        total = min(total, minTotal(triangle, i - 1, j - 1) + triangle[i][j]);
    }
    if (j < i) {
        total = min(total, minTotal(triangle, i - 1, j) + triangle[i][j]);
    }

    return dp[i][j] = total;
}
    int minimumTotal(vector<vector<int>>& triangle) {
        int ans=INT_MAX;
        int n=triangle.size();
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<n;i++){
            ans=min(ans,minTotal(triangle,n-1,i));
        }

        return ans;
    }
};
