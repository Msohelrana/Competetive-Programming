class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size(),n=obstacleGrid[0].size();
        vector<vector<int>>v(m,vector<int>(n,1));

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(obstacleGrid[i][j]==1) v[i][j]=0;
            }
        }
        if(obstacleGrid[0][0]) return 0;
        for(int i=0;i<n;i++){
            if(obstacleGrid[0][i]){
                for(int j=i+1;j<n;j++){
                    v[0][j]=0;
                }
                break;
            }
        }
        for(int i=0;i<m;i++){
            if(obstacleGrid[i][0]){
                for(int j=i+1;j<m;j++){
                    v[j][0]=0;
                }
                break;
            }
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(v[i][j]==0) continue;
                v[i][j]=v[i-1][j]+v[i][j-1];
            }
        }
        return v[m-1][n-1];
    }
};
