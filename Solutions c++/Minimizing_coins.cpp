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
	int n, k; cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];
	vector<int> dp(k + 1, INT_MAX);
	dp[0] = 0;

	for (int i = 1; i <= k; i++) {
		for (int j = 0; j < n; j++) {
			if (a[j] > i) continue;
			else dp[i] = min(dp[i], 1 + dp[i - a[j]]);
		}
	}

	if (dp[k] >= INT_MAX) cout << -1;
	else cout << dp[k];
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