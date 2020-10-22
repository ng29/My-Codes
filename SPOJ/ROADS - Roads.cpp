#include <bits/stdc++.h>
#define endl '\n'
#define LL long long
#define LD long double
#define pb push_back
#define sz(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define debug(x) cerr << #x << " is " << x << endl;
using namespace std;
int const MAXN = 1e4 + 9;
vector<vector<pair<pair<int,int>,int>>> g;
int dist[101][MAXN];
int main(){
    ios_base::sync_with_stdio (0),cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, m, k;
        cin >> k >> n >> m;
        g.resize(n + 1);
        for(int i = 1; i <= n; i++) {
            g[i].clear();
            for(int j = 0; j <= k; j++)
                dist[i][j] = 1e9;
        }
        for(int i = 0; i < m; i++){
            int u,v,l,c;
            cin >> u >> v >> l >> c;
            g[u].push_back({{l,c},v});
        }
        priority_queue<pair<pair<int,int>,int>> pq;
        dist[1][0] = 0;
        pq.push({{0,0},1});
        while(!pq.empty()){
            int u = pq.top().second;
            int d = -pq.top().first.first;
            int c = -pq.top().first.second;
            pq.pop();
            if(c > k) continue;
            if(dist[u][c] < d) continue;
            for(auto cur : g[u]){
                int child = cur.second;
                int curd = cur.first.first;
                int curc = cur.first.second + c;
                if(curc <= k){
                    if(dist[child][curc] > d + curd){
                        dist[child][curc] = d + curd;
                        pq.push({{-dist[child][curc],-curc},child});
                    }
                }
            }
        }

        int ans = 1e9;
        for(int i = 0; i <= k; i++){
            ans = min(ans,dist[n][i]);
        }
        if(ans == 1e9) cout << -1 << endl;
        else cout << ans << endl;
    }
}