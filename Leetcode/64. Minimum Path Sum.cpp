class Solution {
public:
    int dp[201][201];
    int pathSum(vector<vector<int>>& grid,int i,int j){
        if(i==0 and j==0){
            return grid[i][j];
        }
        if(dp[i][j]!=-1) return dp[i][j];

        int sum=INT_MAX;
        if(i-1>=0) sum=min(sum,pathSum(grid,i-1,j)+grid[i][j]);
        if(j-1>=0) sum=min(sum,pathSum(grid,i,j-1)+grid[i][j]);
        return dp[i][j]=sum;
    }
    int minPathSum(vector<vector<int>>& grid) {
        memset(dp,-1,sizeof(dp));
        return pathSum(grid,grid.size()-1,grid[0].size()-1);
        
    }
};
