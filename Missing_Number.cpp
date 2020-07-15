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
    ll sum = 0;
    int k = 1;
    while(k<n){
        int i;
        cin>>i;
        sum -= i;
        sum += k;
        k++;
    }
    cout<<sum+n;
} 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1; 
    //cin>>t;
    while (t--) 
        solve();
}
