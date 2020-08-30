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
#define N 1000005

int ans[N], t[N], pos[N];
vector<int> g[N];
vector<int> order; //Stores the Topological Order
 
bool toposort(int n){ //Returns 1 if there exists a toposort, 0 if there is a cycle	
	order.clear();
	queue<int> q;
	vector<int> indeg(n + 1, 0);
	for(int i = 1; i <= n; i++)
		for(auto &it:g[i])
			indeg[it]++;
	for(int i = 1; i <= n; i++){
		if(!indeg[i])
			q.push(i);
	}
	int idx = 0;
	while(!q.empty()){
		int u = q.front();
		q.pop();
		order.push_back(u);
		idx++;
		pos[u] = idx;
		for(auto &v:g[u])
		{
			indeg[v]--;
			if(!indeg[v])
				q.push(v);
		}
	}
	return (order.size() == n);
}
 
void solve(){
    int n,m; cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y; cin>>x>>y;
        g[x].eb(y);
    }
    if(!toposort(n)){
        cout<<"IMPOSSIBLE";
        return;
    }
    for(int i=0;i<order.size();i++) cout<<order[i]<<" ";
}
 
int32_t main(){
    May_the_fork_be_with_you
    int t = 1; 
    // cin>>t;
    while (t--) {
        solve();
	}
}
