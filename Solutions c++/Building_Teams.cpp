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
vector<int> assign(N,-1);
vector<vector<int>> adj(N);
 
bool dfs(int u, bool foo){
    vis[u] = true;
    bool f = true;
    for(auto x : adj[u]){
        if(assign[u]!=-1){
            if((!foo && assign[x] == 1) || (foo && assign[x] == 2)){
                return false;
            }
        }
        if(!vis[x]) {
            if(foo) assign[x] = 1;
            else assign[x] = 2;
            f &= dfs(x,!foo);
        }
    }
    return f;
}
 
void solve(){
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y; cin>>x>>y;
        adj[x].eb(y); adj[y].eb(x);
    }
    int result = 0;
    vector<int> res;
    for(int i=1;i<=n;i++){
        if(!vis[i]) {
            assign[i] = 1;
            if(!dfs(i,false)){
                cout<<"IMPOSSIBLE";
                return;
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<assign[i]<<" ";
    }
}
 
int32_t main(){
    May_the_fork_be_with_you
    int t = 1; 
    // cin>>t;
    while (t--) {
        solve();
	}
}
