#include <bits/stdc++.h> 
using namespace std; 
#define ll long long
#define f first
#define s second
#define pb push_back
  
// Driver program 
void solve() { 
    int n;
    cin>>n;
    ll res = 0;
    vector<ll> s(n);
    for(int i=0;i<n;i++) cin>>s[i];
    for(int i=0;i<n-1;i++){
        if(s[i]>s[i+1]) {
            res += s[i]-s[i+1];
            s[i+1] = s[i];
        }
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
