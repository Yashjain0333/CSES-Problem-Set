#include <bits/stdc++.h> 
using namespace std; 
#define MOD 1000000007
#define ll long long
#define f first
#define s second
#define pb push_back
 
// Driver program 
void solve() { 
    int n;
    cin>>n;
    vector<int> a(n);
    ll sum = 0;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        sum += a[i];
    }
    //Produce all subsets
    ll res = 0;
    for(int i=0;i<(1<<n);i++){
        ll cur = 0;
        for(int j=0;j<n;j++){
            if(i>>j & 1) cur += a[j];
        }
        if(cur<=sum/2) res = max(res,cur);
    }
    cout<<sum-2*res;
} 
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1; 
    // cin>>t;
    while (t--) 
        solve();
}
