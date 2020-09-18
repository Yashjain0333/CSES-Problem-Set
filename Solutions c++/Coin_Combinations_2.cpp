//BY: YASH JAIN, CF: yashjain0333
#include <bits/stdc++.h>
using namespace std;
#define May_the_fork_be_with_you ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define deb(x) cout<<#x<<": "<<x<<endl;
#define MOD 1000000007
#define INF 1e18
#define ll long long
#define f first
#define s second
#define pb push_back
#define eb emplace_back
#define endl "\n"
// #define int long long
#define N 100005

void solve() {
	int n, k; cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];
	vector<vector<int>> dp(n + 1, vector<int>(k + 1, 0));
	dp[0][0] = 1;

	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= k; j++) {
			dp[i][j] = dp[i - 1][j];
			int left = j - a[i - 1];
			if (left >= 0) {
				(dp[i][j] += dp[i][left]) %= MOD;
			}
		}
	}

	cout << dp[n][k] << endl;
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