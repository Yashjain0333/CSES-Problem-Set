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
#define N 200005

vector<vector<int>> adj(N);

int bfs(int u, vector<int>& dist){
    dist[u] = 0;
    queue<int> q;
    q.push(u);
    int res = 0, l;
    while(!q.empty()){
        int v = q.front(); q.pop();
        for(auto x : adj[v]){
            if(dist[x]==INF){
                dist[x] = dist[v]+1;
                if(res<dist[x]){
                    res = dist[x];
                    l = x;
                }
                q.push(x);
            }
        }
    }
    return l;
}

void solve(){
    int n; cin>>n;
    if(n==1){
        cout<<0;
        return;
    }
    for(int i=0;i<n-1;i++) {
        int x,y; cin>>x>>y;
        adj[x].eb(y); adj[y].eb(x);
    }
    vector<int> d1(N,INF);
    vector<int> d2(N,INF);
    vector<int> d(N,INF);
    int p = bfs(1,d);
    int q = bfs(p,d2);
    bfs(q,d1);
    for(int i=1;i<=n;i++){
        cout<<max(d1[i],d2[i])<<" ";
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
