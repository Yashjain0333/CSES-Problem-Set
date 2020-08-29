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
    int n; cin>>n;
    vector<int> dp(n+1,0);
    dp[0] = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=min((int)6,i);j++){
            dp[i] = (dp[i]+dp[i-j])%MOD;
        }
    }
    cout<<dp[n];
}
 
int32_t main(){
    May_the_fork_be_with_you
    int t = 1; 
    // cin>>t;
    while (t--) {
        solve();
	}
}
