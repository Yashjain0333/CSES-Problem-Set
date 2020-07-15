#include <bits/stdc++.h> 
using namespace std; 
#define ll long long
#define f first
#define s second
#define pb push_back
  
// Driver program 
void solve() { 
    ll n;
    cin>>n;
    cout<<n<<" ";
    while(n!=1){
        if(n%2){
            n = n*3+1;
        }
        else n /= 2;
        cout<<n<<" ";
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
