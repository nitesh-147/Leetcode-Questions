class Solution {
public:
    bool dfs(int i,int j,int c,vector<vector<char>>& board, string word){
        if(word.size()==c) return true;
       int m=board.size(),n=board[0].size();
       if(i<0 || i>=m || j<0 || j>=n || board[i][j]!=word[c]){
           return false;
       }

       char temp=board[i][j];
       board[i][j]=' ';

       bool ans= dfs(i+1,j,c+1,board,word) ||
       dfs(i-1,j,c+1,board,word) ||
       dfs(i,j-1,c+1,board,word) ||
       dfs(i,j+1,c+1,board,word);

       board[i][j]=temp;
       return ans;
    }
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++){
            for(auto j=0;j<board[0].size();j++){
                if(board[i][j]==word[0]){
                if(dfs(i,j,0,board,word))
                    // if(ans) return true;
                    return true;
                }
            }
        }
        return false;
    }
};