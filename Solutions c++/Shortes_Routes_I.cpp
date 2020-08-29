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

vector<vector<pair<int,int>>> adj(N);
vector<int> res(N,0);
vector<bool> vis(N,false);
vector<int> d(N,INF);

void dijkstra(int v){
	d[v] = 0;
	int u;
	set<pair<int,int> > s;
	s.insert({d[v], v});
	while(!s.empty()){
		u = s.begin() -> second;
		s.erase(s.begin());
		for(auto p : adj[u])
			if(d[p.first] > d[u] + p.second){
				s.erase({d[p.first], p.first});
				d[p.first] = d[u] + p.second;
				s.insert({d[p.first], p.first});
			}
	}
}

void solve(){
    int n,m; cin>>n>>m;
    for(int i=0;i<m;i++) {
        int x,y,z; cin>>x>>y>>z;
        adj[x].pb({y,z});
    }
    dijkstra(1);
    for(int i=1;i<=n;i++) cout<<d[i]<<" ";
}
 
int32_t main(){
    May_the_fork_be_with_you
    int t = 1; 
    // cin>>t;
    while (t--) {
        solve();
	}
}
