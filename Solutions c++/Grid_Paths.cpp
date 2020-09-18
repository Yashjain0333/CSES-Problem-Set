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
#define int long long
#define N 100005

void solve() {
	int n; cin >> n;
	vector<vector<char>> grid(n, vector<char>(n));

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) cin >> grid[i][j];

	if (n == 1) {
		if (grid[0][0] == '*') cout << 0;
		else cout << 1;
		return;
	}

	vector<vector<int>> dp(n, vector<int>(n, 0));

	for (int i = n - 1; i >= 0; i--) {
		if (grid[i][n - 1] == '*') break;
		dp[i][n - 1] = 1;
	}
	for (int i = n - 1; i >= 0; i--) {
		if (grid[n - 1][i] == '*') break;
		dp[n - 1][i] = 1;
	}
	dp[n - 1][n - 1] = 0;

	for (int i = n - 2; i >= 0; i--) {
		for (int j = n - 2; j >= 0; j--) {
			if (grid[i][j] == '*') continue;
			dp[i][j] = (dp[i][j] + dp[i][j + 1]) % MOD;
			dp[i][j] = (dp[i + 1][j] + dp[i][j]) % MOD;
		}
	}

	cout << dp[0][0];
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