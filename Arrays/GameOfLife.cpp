class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int n=board.size();
        int m=board[0].size();
        vector<vector<int>> dir={{1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};
       
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++){
                int count=0; 
                for(vector<int> &d:dir){
                    int x=i+d[0];
                    int y=j+d[1];
                    if(x>=0 && y>=0 && x<n && y<m && board[x][y]%10==1) count++;
                }
                board[i][j]+=10*count;
            }
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(board[i][j]==21 || board[i][j]/10==3) board[i][j]=1;
                else board[i][j]=0;
    }
};