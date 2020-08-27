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
#define N 5005

vector<vector<bool>> vis(1001,vector<bool>(1001,false));
vector<vector<char>> a(1001,vector<char>(1001));
int n, m;
vector<vector<int>> dir{{-1,0},{0,-1},{1,0},{0,1}};

void bfs(int i, int j){
    vis[i][j] = true;
    for(auto d : dir){
        int x = i + d[0], y = j + d[1];
        if(x<n && x>=0 && y<m && y>=0 && !vis[x][y] && a[x][y] == '.') bfs(x,y);
    }
}

void solve(){
    cin>>n>>m;
    int res = 0;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++) cin>>a[i][j];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!vis[i][j] && a[i][j] == '.') {
                res++;
                bfs(i,j);
            }
        }
    }
    cout<<res;
}

int32_t main(){
    May_the_fork_be_with_you
    int t = 1; 
    // cin>>t;
    while (t--) {
        solve();
	}
}
