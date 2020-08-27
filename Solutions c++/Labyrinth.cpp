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
 
int n, m, s1, s2, e1, e2;
vector<vector<int>> dist(1001,vector<int>(1001,-1));
vector<vector<int>> dir{{-1,0},{0,-1},{1,0},{0,1}};
 
void solve(){
    cin>>n>>m;
    vector<vector<char>> a(n, vector<char> (m));
    for(int i=0;i<n;i++) 
        for(int j=0;j<m;j++)
            cin>>a[i][j];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j] == 'A'){
                s1 = i; s2 = j;
            }
            if(a[i][j] == 'B'){
                e1 = i; e2 = j;
            }
        }
    }
    queue<pair<pair<int,int>,int>> q;
    q.push({{s1,s2},0});
    dist[s1][s2] = 0;
    while(!q.empty()){
        int i = q.front().f.f, j = q.front().f.s, k = q.front().s;
        q.pop();
        for(auto d : dir){
            int x = i + d[0], y = j + d[1];
            if(x<n && x>=0 && y>=0 && y<m && a[x][y] != '#' && dist[x][y] == -1){
                if(x == e1 && y == e2){
                    cout<<"YES\n";
                    cout<<k+1<<endl;
                    string res = "";
                    while(x != s1 || y != s2){
                        for(auto d : dir){
                            int p = x + d[0], q = y + d[1];
                            if(p>=0 && q>=0 && p<n && q<m && dist[p][q] == k){
                                if(d[0]>0) res += 'U';
                                if(d[0]<0) res += 'D';
                                if(d[1]>0) res += 'L';
                                if(d[1]<0) res += 'R';
                                x = p; y = q;
                                break;
                            }
                        }
                        k--;
                    }
                    reverse(res.begin(),res.end());
                    cout<<res;
                    return;
                }
                q.push({{x,y},k+1});
                dist[x][y] = k+1;
            }
        }
    }
    cout<<"NO";
}
 
int32_t main(){
    May_the_fork_be_with_you
    int t = 1; 
    // cin>>t;
    while (t--) {
        solve();
	}
}
