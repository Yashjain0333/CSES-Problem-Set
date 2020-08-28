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
#define N 200002

vector<vector<int>> adj(N);
vector<int> res(N,0);
vector<bool> vis(N,false);

int dfs(int u){
    vis[u] = true;
    for(auto x : adj[u]){
        if(!vis[x]) res[u] += 1 + dfs(x);
    }
    return res[u]; 
}

void solve(){
    int n; cin>>n;
    for(int i=2;i<=n;i++) {
        int x; cin>>x;
        adj[x].eb(i); adj[i].eb(x);
    }
    dfs(1);
    for(int i=1;i<=n;i++) cout<<res[i]<<" ";
}
 
int32_t main(){
    May_the_fork_be_with_you
    int t = 1; 
    // cin>>t;
    while (t--) {
        solve();
	}
}
