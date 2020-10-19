class Solution {
public:
    int * vis,*tin,*low;
    int timer = 0;
    vector<vector<int>> adj;
    vector<vector<int>> ans;
    void dfs(int node,int par){
        vis[node]=1;
        tin[node]=timer;
        low[node]=timer;
        timer++;
        for (int v : adj[node]){
            
            if (v == par) continue; 
            if(vis[v]){
                low[node] = min(low[node],tin[v]);
            }else {
                dfs(v,node);
                low[node] = min(low[node],low[v]);
                vector<int> edge;
                edge.push_back(node);
                edge.push_back(v);
                if (low[v]  > tin [node]) ans.push_back(edge);
            }
        }
    }
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        vis = (int *) malloc ((n+1)*sizeof(int)); 
        tin = (int *) malloc ((n+1)*sizeof(int)); 
        low = (int *) malloc ((n+1)*sizeof(int)); 
        adj = vector<vector<int>> (n);
        for (auto edge : connections){
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        for (int i=0;i<n;i++) vis[i]=0;
        dfs(0,-1);
        return ans;
        
    }
};