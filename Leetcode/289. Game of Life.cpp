class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int n=board.size();
        int m=board[0].size();
        vector<vector<int> >v(n);

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int ct=0;
                    if(i-1>=0 and board[i-1][j]==1){
                        ct++;
                    }
                    if(i+1<n and board[i+1][j]==1){
                        ct++;
                    }
                    if(j-1>=0 and board[i][j-1]==1){
                        ct++;
                    }
                    if(j+1<m and board[i][j+1]==1){
                        ct++;
                    }
                    if(i-1>=0 and j-1>=0 and board[i-1][j-1]==1){
                        ct++;
                    }
                    if(i-1>=0 and j+1<m and board[i-1][j+1]==1){
                        ct++;
                    }
                    if(i+1<n and j-1 >=0 and board[i+1][j-1]==1){
                        ct++;
                    }
                    if(i+1<n and j+1<m and board[i+1][j+1]==1){
                        ct++;
                    }

                    

                if(board[i][j]==1){
                    if(ct<2 or ct>3) v[i].push_back(0);
                    else v[i].push_back(1);
                }

                else{
                      if(ct==3){
                         v[i].push_back(1);
                      }
                      else v[i].push_back(0);
                }
            }
        }
        board=v;
    }
};
