#include <bits/stdc++.h> 
using namespace std; 
#define MOD 1000000007
#define ll long long
#define f first
#define s second
#define pb push_back
 
// Driver program 
void solve() { 
    int x,y;
    cin>>x>>y;
    if((x+y)%3==0 && 2*x>=y && 2*y>=x) cout<<"YES\n";
    else cout<<"NO\n";
} 
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1; 
    cin>>t;
    while (t--) 
        solve();
}
