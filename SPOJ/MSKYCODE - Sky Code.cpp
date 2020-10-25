#include <bits/stdc++.h>
#define f first
#define s second
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
vector<int> d[MAXN];
LL nbr[MAXN];
LL get(LL x){
    return x * (x - 1) * (x - 2) * (x - 3) / 24;
}

int main(){
    ios_base::sync_with_stdio (0),cin.tie(0);
    for(int i = 2; i < MAXN; i++){
        for(int j = i; j < MAXN; j+= i){
            d[j].push_back(i);
        }
    }
    int n;
    
    while(cin >> n){
        int a[n];
        memset(nbr,0,sizeof (nbr));
        for(int i = 0; i < n; i ++){
            cin >> a[i];
            for(auto cur : d[a[i]]) nbr[cur]++;
        }
        for(int i = 0; i <MAXN; i++){
            nbr[i] = get(nbr[i]);
        }
    
        for(int i = MAXN; i >= 0; i--){
            for(int j = 0; j < sz(d[i]); j++){
                int x = d[i][j];
                if(x == i) break;
                nbr[x] -= nbr[i];
            }
        }
        LL ans = get(n);
        for(int i = 0; i < MAXN; i++){
            ans -= nbr[i];
        }
        cout << ans << endl;
    }
    
}