//BY: YASH JAIN, CF: yashjain0333
#include <bits/stdc++.h>
using namespace std;
#define May_the_fork_be_with_you ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define deb(x) cout<<#x<<": "<<x<<endl;
#define MOD 1000000007
#define INF 1e18
// #define ll long long
#define f first
#define s second
#define pb push_back
#define eb emplace_back
#define endl "\n"

void solve() {
	int a, b; cin >> a >> b;
	vector<vector<int>> dp(a + 1, vector<int>(b + 1, INT_MAX));
	for (int i = 1; i <= b; i++) dp[1][i] = i - 1;
	for (int i = 1; i <= a; i++) dp[i][1] = i - 1;
	for (int i = 2; i <= a; i++) {
		for (int j = 2; j <= b; j++) {
			if (i == j) {
				dp[i][j] = 0;
				continue;
			}
			for (int k = 1; k < j; k++) {
				dp[i][j] = min(dp[i][j], 1 + dp[i][j - k] + dp[i][k]);
			}
			for (int k = 1; k < i; k++) {
				dp[i][j] = min(dp[i][j], 1 + dp[i - k][j] + dp[k][j]);
			}
		}
	}
	cout << dp[a][b];
}

int32_t main() {

#ifndef ONLINE_JUDGE
	// for geting input form input.txt
	freopen("input.txt", "r", stdin);
	// for wrting output to output.txt
	freopen("output.txt", "w", stdout);
#endif

	May_the_fork_be_with_you
	int t = 1;
	// cin >> t;
	while (t--) {
		solve();
	}
}