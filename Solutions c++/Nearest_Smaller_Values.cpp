//BY: YASH JAIN, CF: yashjain0333
#include <bits/stdc++.h>
using namespace std;
#define May_the_fork_be_with_you ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MOD 1000000007
#define ll long long
#define f first
#define s second
#define pb push_back
#define eb emplace_back
#define endl "\n"
#define int long long

void solve(){
    int n; cin>>n;
    vector<int> a(n),res(n);
    for(int i=0;i<n;i++) cin>>a[i];
    stack<int> s;
    for(int i=0;i<n;i++){
		while(!s.empty() && a[s.top()]>=a[i]) s.pop();
		if(!s.empty()) res[i] = s.top()+1;
		else res[i] = 0;
		s.push(i);
	}
	for(int i=0;i<n;i++) cout<<res[i]<<" ";
}

int32_t main(){
    May_the_fork_be_with_you
    int t = 1; 
    //cin>>t;
    while (t--)
        solve();
}
