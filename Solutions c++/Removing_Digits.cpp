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
	int k; cin >> k;
	vector<int> dp(k + 1, INT_MAX);
	dp[0] = 0;
	for (int i = 1; i <= 9; i++) dp[i] = 1;
	for (int i = 10; i <= k; i++) {
		int tmp = i;
		while (tmp) {
			int t = tmp % 10;
			dp[i] = min(dp[i], 1 + dp[i - t]);
			tmp /= 10;
		}
	}
	cout << dp[k];
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