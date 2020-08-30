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
#define N 502

vector<vector<int>> d(N,vector<int>(N,INF));
int n,m,q;
 
void solve(){
    cin>>n>>m>>q;
    for(int i=0;i<m;i++) {
        int x,y,z; cin>>x>>y>>z;
        d[x][y] = min(d[x][y],z);
        d[y][x] = min(d[y][x],z);
    }
    for(int i=1;i<=n;i++) d[i][i] = 0;
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                d[i][j] = min(d[i][j],d[i][k]+d[k][j]);
            }
        }
    }
    while(q--){
        int x, y; cin>>x>>y;
        if(d[x][y]>=INF) cout<<-1<<endl;
        else cout<<d[x][y]<<endl;
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
