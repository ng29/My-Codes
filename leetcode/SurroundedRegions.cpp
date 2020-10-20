class Solution {
public:
    static const int  MAXN = 1003;
    int visited[MAXN][MAXN];
    int dx[4] = {0,0,-1,1};
    int dy[4] = {1,-1,0,0};
    int n, m;
    bool is_valid(int i, int j){
        return i >= 0 && i < n && j >= 0 && j < m;
    }
    void dfs(int i, int j, vector<vector<char>>& board){
        visited[i][j] = 1;
        for(int k = 0; k < 4; k++){
            int x = i + dx[k];
            int y = j + dy[k];
            if(is_valid(x,y) && !visited[x][y] && board[x][y] == 'O')
                dfs(x,y, board);            
            }
    }
    void solve(vector<vector<char>>& board) {
        n = board.size();
        if(n == 0) return;
        m = board[0].size();
        if(m == 0) return;
        memset(visited, 0, sizeof(visited));
        
        for(int i = 0; i < n; i++){
            
            if(board[i][0] == 'O' && !visited[i][0])
                dfs(i,0, board);
            
            if(board[i][m - 1] == 'O' && !visited[i][m-1])
                dfs(i,m - 1, board);
        }
        for(int i = 0; i < m; i++){
            
            if(board[n - 1][i] == 'O' && !visited[n - 1][i])
                dfs(n - 1,i, board);
            
            if(board[0][i] == 'O' && !visited[0][i])
                dfs(0, i, board);
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(!visited[i][j]) board[i][j] = 'X'; 
            }
        }
        
    }
};