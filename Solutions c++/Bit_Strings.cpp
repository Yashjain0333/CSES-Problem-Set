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
    ll res = 1;
    for(int i=0;i<n;i++){
        res *= 2;
        res %= MOD;
    }
    cout<<res;
} 
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1; 
    //cin>>t;
    while (t--) 
        solve();
}
