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
#define N 500000
 
vector<vector<int>> adj(N+1);
vector<int> par(N+1);

pair<int,int> bfs(int v, int n){
    vector<int> dist(n+1);
    for(int i=1;i<=n;i++){
        dist[i] = INF;
    }
    dist[v] = 0;
    queue<int> q;
    q.push(v);
    int res = 0;
    int l = v;
    while(!q.empty()){
        int cur = q.front(); q.pop();
        for(int k : adj[cur]){
            if(dist[k]==INF){
                dist[k] = dist[cur]+1;
                if(res<dist[k]){
                    res = dist[k];
                    l = k;
                }
                q.push(k);
                par[k] = cur;
            }
        }
    }
    return {l,res};
}

void solve(){
    int n; cin>>n;
    for(int i=0;i<n-1;i++){
        int x, y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    auto p = bfs(1,n);
    auto res = bfs(p.f,n);
    cout<<res.s;
}

int32_t main(){
    May_the_fork_be_with_you
    int t = 1; 
    // cin>>t;
    while (t--) {
        solve();
	}
}
