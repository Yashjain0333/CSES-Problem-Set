//BY: YASH JAIN, CF: yashjain0333
#include <bits/stdc++.h>
using namespace std;
#define May_the_fork_be_with_you ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MOD 1000000007
#define INF 1e18
#define ll long long
#define f first
#define s second
#define pb push_back
#define eb emplace_back
#define endl "\n"
#define int long long
#define N 100002
 
int n, m, cnt = 0;
vector<bool> vis(N,false);
// vector<vector<int>> dir{{-1,0},{0,-1},{1,0},{0,1}};
vector<vector<int>> adj(N);
vector<int> par(N,-1);

void bfs(int u){
    queue<int> q;
    vis[u] = true;
    q.push(u);
    while(!q.empty()){
        int cur = q.front(); q.pop();
        for(auto x : adj[cur]){
            if(!vis[x]){
                par[x] = cur;
                vis[x] = true;
                q.push(x);
            }
        }
    }
}
 
void solve(){
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y; cin>>x>>y;
        adj[x].eb(y); adj[y].eb(x);
    }
    bfs(1);
    int x = n;
    vector<int> res;
    res.eb(n);
    while(x != 1){
        if(par[x]==-1){
            cout<<"IMPOSSIBLE";
            return;
        }
        res.eb(par[x]);
        x = par[x];
    }
    int k = res.size();
    cout<<k<<endl;
    for(int i=k-1;i>=0;i--) cout<<res[i]<<" ";
}
 
int32_t main(){
    May_the_fork_be_with_you
    int t = 1; 
    // cin>>t;
    while (t--) {
        solve();
	}
}
