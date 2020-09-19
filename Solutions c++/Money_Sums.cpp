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
	int n; cin >> n;
	vector<int> a(n);
	int sum = 0;
	for (int &v : a) {
		cin >> v;
		sum += v;
	}
	sort(a.begin(), a.end());
	vector<vector<bool>> dp(n + 1, vector<bool>(sum + 1, 0));
	dp[0][0] = 1;
	vector<int> res;
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= sum; j++) {
			dp[i][j] = dp[i - 1][j];
			if (a[i - 1] <= j) dp[i][j] = dp[i][j] | dp[i - 1][j - a[i - 1]];
		}
	}
	for (int i = 1; i <= sum; i++) {
		if (dp[n][i]) res.eb(i);
	}
	int k = res.size();
	cout << k << endl;
	for (int i = 0; i < k; i++) cout << res[i] << " ";
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