#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long
#define f first
#define s second
#define pb push_back
 
void solve(){
    int n;
    cin>>n;
    ll res = INT_MIN, cur = 0;
    int mux = INT_MIN;
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        mux = max(mux,tmp);
        cur += tmp;
        if(res<cur) res = cur;
        if(cur<0){
            cur = 0;
        }
    }
    if(res==INT_MIN){
        cout<<mux;
    }
    else cout<<res;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1; 
    //cin>>t;
    while (t--) 
        solve();
}
