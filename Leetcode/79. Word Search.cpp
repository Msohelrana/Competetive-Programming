class Solution {
public:
    bool isposible(vector<vector<char>>& board, string word,int i,int j,int k){
        if(k==word.size()){
            return true;
        }
        if(i<0 or i>=board.size() or j<0 or j>=board[0].size() or board[i][j]!=word[k]){
            return false;
        }

        char temp=board[i][j];
        board[i][j]='\0';

        if(isposible(board,word,i,j-1,k+1) or isposible(board,word,i,j+1,k+1) or isposible(board,word,i-1,j,k+1) or isposible(board,word,i+1,j,k+1)){
            return true;
        }
        board[i][j]=temp;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++){

            for(int j=0;j<board[i].size();j++){
                if(isposible(board,word,i,j,0)){
                      return true;
                }
            }
        }
        return false;
    }
};
