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
	int n, m; cin >> n >> m;
	vector<int> a(n);
	for (int &v : a) cin >> v;
	vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
	for (int i = 1; i <= m; i++) {
		if (a[0] == 0 || a[0] == i) dp[1][i] = 1;
		else dp[1][i] = 0;
	}

	for (int i = 2; i <= n; i++) {
		int k = a[i - 1];
		for (int j = 1; j <= m; j++) {
			if (j == k || k == 0) {
				for (auto x : {j, j + 1, j - 1}) {
					dp[i][j] = (dp[i][j] + dp[i - 1][x]) % MOD;
				}
			}
			else dp[i][j] = 0;
		}
	}

	int res = 0;
	for (int i = 1; i <= m; i++) {
		res = (res + dp[n][i]) % MOD;
	}
	cout << res;
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