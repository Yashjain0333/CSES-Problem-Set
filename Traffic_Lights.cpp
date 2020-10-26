//BY: YASH JAIN, CF: yashjain0333
#include <bits/stdc++.h>
using namespace std;
#define May_the_fork_be_with_you ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) (x).begin(), (x).end()
#define rall(v) v.rbegin(),v.rend()
#define deb(x) cout<<#x<<": "<<x<<endl;
#define debn(x) cout<<#x<<": "<<x<<"  ";
#define here cout<<"HERE\n";
#define MOD 1000000007
#define INF 1e18
#define ll long long
#define f first
#define s second
#define pb push_back
#define eb emplace_back
#define endl "\n"
#define int long long
#define N 200'005
#define sq(x) ((x)*(x))
ll gcd(ll a, ll b) {if (!b)return a; return gcd(b, a % b);}
ll power(ll x, ll y, ll p = INF) {ll res = 1; x %= p; while (y > 0) {if (y & 1)res = (res * x) % p; y = y >> 1; x = (x * x) % p;} return res;}

void solve(){
    int x, n, a[200002];
    set <int> s;
    multiset <int> m;
    cin >> x >> n;
    s.insert(0); s.insert(x);
    for(int i = 1; i <= n; ++i) {
        cin >> a[i];
        auto l = s.lower_bound(a[i]), r = --s.upper_bound(a[i]);
        deb(*l)
        deb(*r)
        if(*l > a[i]) --l;
        if(*r < a[i]) ++r;
        auto f = m.find(*r - *l);
        if(f != m.end()) m.erase(f);
        m.insert(a[i] - *l);
        m.insert(*r - a[i]);
        s.insert(a[i]);
        cout << *--m.end() << ' ';
    }
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
    cout<<fixed << setprecision(2);
    while (t--) {
        solve();
    }

    cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
}