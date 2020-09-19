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

void solve() {
	int n; cin >> n;
	int sum = (n * (n + 1)) / 2;
	if (sum % 2) {
		cout << 0;
		return;
	}
	int target = sum / 2;
	vector<vector<int>> dp(n, vector<int>(target + 1, 0));
	dp[0][0] = 1;
	for (int i = 1; i < n; i++) {
		for (int j = 0; j <= target; j++) {
			dp[i][j] = dp[i - 1][j];
			if (j - i >= 0) {
				dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - i]) % MOD;
			}
		}
	}
	cout << dp[n - 1][target];
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