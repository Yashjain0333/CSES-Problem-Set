//BY: YASH JAIN, CF: yashjain0333
#include <bits/stdc++.h>
using namespace std;
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
	int n, k; cin >> n >> k;
	vector<pair<int, int>> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i].f;
		a[i].s = i;
	}
	sort(a.begin(), a.end());
	for (int i = 0; i < n - 2; i++) {
		if (i == 0 || (i > 0 && a[i] != a[i - 1])) {
			int j = i + 1;
			int q = n - 1;
			while (q > j) {
				if (a[q].f + a[j].f + a[i].f == k) {
					cout << a[i].s + 1 << " " << a[j].s + 1 << " " << a[q].s + 1 << endl;
					return;
				}
				else if (a[q].f + a[j].f + a[i].f > k) q--;
				else j++;
			}
		}
	}
	cout << "IMPOSSIBLE";
}

int32_t main() {

#ifndef ONLINE_JUDGE
	// for geting input form input.txt
	freopen("input.txt", "r", stdin);
	// for wrting output to output.txt
	freopen("output.txt", "w", stdout);
#endif

	int t = 1;
	// cin>>t;
	while (t--) {
		solve();
	}
}