#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long
#define f first
#define s second
#define pb push_back
 
bool comp(pair<int,int> a, pair<int,int> b){
    return a.s<b.s;
}
 
void solve(){
    int n;
    cin>>n;
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].f>>a[i].s;
    }
    sort(a.begin(),a.end(),comp);
    int res = 0, end = 0;
    for(int i=0;i<n;i++){
        if(end<=a[i].f){
            end = a[i].s;
            res++;
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
