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
    vector<pair<int,int>> a;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        a.pb({x,1}); a.pb({y,-1});
    }
    sort(a.begin(),a.end());
    int res = 0, cur = 0;
    for(int i=0;i<a.size();i++){
        cur += a[i].s;
        res = max(cur,res);
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
