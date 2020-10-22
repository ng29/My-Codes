#include <bits/stdc++.h>
 #define f first
 #define s second
 #define endl '\n'
 #define LL long long
 #define pb push_back
 #define sz(a) (int)a.size()
 #define all(a) a.begin(),a.end()
 #define rall(a) a.rbegin(),a.rend()
 #define debug(x) cerr << #x << " = " << x << endl;
 using namespace std;
 int const MAXN = 2e6 + 9;
 int dp[MAXN][2];
 vector<vector<int>>g;
 void dfs (int node , int par = -1){
    dp[node][1] = 1;
    for (auto child : g[node]){
        if (child == par) continue;
        dfs(child,node);
        dp[node][1] += min(dp[child][0],dp[child][1]);
        dp[node][0] += dp[child][1];
    }
 }
 int main(){
    ios_base::sync_with_stdio (0),cin.tie(0);
    int n;
    cin >> n;
    g.resize(n+1);
    for (int i = 1; i < n; i++){
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1);
    cout << min(dp[1][1],dp[1][0]);
 }