class Solution {
public:
    int dp[1005][1005];
    bool is_valid(int i, int j, int n, int m){
        return i >= 0 && i < n && j >= 0 && j < m;
    }
    int dx[4] = {0,0,1,-1};
    int dy[4] = {1,-1,0,0};
    int solve(int i, int j,vector<vector<int>> & matrix){
        int & ret = dp[i][j];
        if(ret != -1) return ret;
        ret = 1;
        int n = matrix.size();
        int m = matrix[0].size();
        for(int k = 0; k < 4; k++){
            int x = i + dx[k];
            int y = j + dy[k];
            if(is_valid(x,y,n,m) && matrix[i][j] < matrix[x][y]){
            ret = max(ret, 1 + solve(x,y,matrix));
        }
    }
        return ret;

    }


    int longestIncreasingPath(vector<vector<int>>& matrix) {
        	int n = matrix.size();
            if( n == 0) return 0;
            int m = matrix[0].size();
            if( m == 0) return 0;

            vector<tuple<int,int,int>> values;
            memset(dp, -1,sizeof(dp));
            int ans = 0;
            for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++)
                    ans = max(ans, solve(i,j,matrix));
            }
        return ans;
    }
};