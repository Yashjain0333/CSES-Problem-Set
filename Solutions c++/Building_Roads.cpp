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
vector<vector<int>> dir{{-1,0},{0,-1},{1,0},{0,1}};
vector<vector<int>> adj(N);
 
void dfs(int u){
    vis[u] = true;
    cnt++;
    for(auto x : adj[u]){
        if(!vis[x]) dfs(x);
    }
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
            dfs(i);
            res.eb(i);
            result++;
            if(cnt == n) break;
        }
    }
    if(result>0) cout<<result-1<<endl;
    if(res.size()>0){
        for(int i=0;i<res.size()-1;i++){
            cout<<res[i]<<" "<<res[i+1]<<endl;
        }
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
