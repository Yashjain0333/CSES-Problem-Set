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
    if(n==1){
        cout<<1;
        return;
    }
    if(n<=3){
        cout<<"NO SOLUTION";
        return;
    }
    int i = 2;
    while(i<=n){
        cout<<i<<" ";
        i += 2;
    }
    i = 1;
    while(i<=n){
        cout<<i<<" ";
        i += 2;
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
