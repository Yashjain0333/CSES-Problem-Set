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
 
void solve(){
    string s,t; cin>>s>>t;
    int n = s.length(), m = t.length();
    vector<vector<int>> dp(n+1,vector<int>(m+1,0));
    for(int i=0;i<=n;i++) dp[i][0] = i;
    for(int i=0;i<=m;i++) dp[0][i] = i;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            int sub = 0;
            if(s[i-1]!=t[j-1]) sub++;
            dp[i][j] = min({dp[i-1][j-1]+sub,dp[i][j-1]+1,dp[i-1][j]+1});
        }
    }
    cout<<dp[n][m];
}
 
int32_t main(){
    May_the_fork_be_with_you
    int t = 1; 
    // cin>>t;
    while (t--) {
        solve();
	}
}
