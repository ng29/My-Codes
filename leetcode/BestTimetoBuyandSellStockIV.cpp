class Solution {
public:
    int maxProfit(int k, vector<int>& arr) {
        int n=arr.size();
        if (n<2)return 0;
        if (k>n){ // simple case
            // cout<<"yes";
            int ans = 0;
            for (int i=1; i<n; ++i){
                ans += max(arr[i] - arr[i-1],0);
            }
            return ans;
        }
        int dp[k+1][n];
        for (int i=0;i<=k;i++) dp[i][0]=0;
        for(int i=0;i<n;i++) dp[0][i]=0;
        for (int i=1;i<=k;i++){
            int max=INT_MIN;
            for (int j=1;j<n;j++){
                if (dp[i-1][j-1]-arr[j-1]>max)max=dp[i-1][j-1]-arr[j-1];
                if (max+arr[j]>dp[i][j-1]) dp[i][j]=max+arr[j];
                else dp[i][j]=dp[i][j-1];
            }
        }
        return dp[k][n-1];
    }
};
