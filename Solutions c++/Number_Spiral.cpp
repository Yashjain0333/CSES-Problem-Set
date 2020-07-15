#include <bits/stdc++.h> 
using namespace std; 
#define ll long long
#define f first
#define s second
#define pb push_back
 
// Driver program 
void solve() { 
    int x,y;
    cin>>x>>y;
    int m = max(x,y)-1;
    ll res = (ll)m*(ll)m;
    if(m%2){
        if(x<=y){
            res += x;
        }
        else{
            res += x + (x-y);
        }
    }
    else{
        if(y<=x){
            res += y;
        }
        else{
            res += y + (y-x);
        }
    }
    cout<<res<<"\n";
} 
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1; 
    cin>>t;
    while (t--) 
        solve();
}
