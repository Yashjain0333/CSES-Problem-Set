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
    for(int k=1;k<=n;k++){
        ll tmp = k*k;
        ll ans = tmp*(tmp-1)/2;
        if(k>2){
            ans -= 4*(k-1)*(k-2);
        }
        cout<<ans<<"\n";
    }
} 
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1; 
    //cin>>t;
    while (t--) 
        solve();
}
