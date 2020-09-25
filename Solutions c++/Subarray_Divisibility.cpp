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

void solve() {
	int n; cin >> n;
	vector<int> a(n);
	unordered_map<int, int> m;
	int cur = 0, res = 0;
	m[0]++;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		cur = (cur + a[i] % n + n) % n;
		res += m[cur];
		m[cur]++;
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
	// cin>>t;
	while (t--) {
		solve();
	}

	cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
}