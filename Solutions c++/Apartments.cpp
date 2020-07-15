#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long
#define f first
#define s second
// vector<int> a(n);
// for(int i=0;i<n;i++) cin>>a[i];
 
void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> a(n),b(m);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    sort(a.begin(),a.end()); sort(b.begin(),b.end());
    int i = 0, j = 0, res = 0;
    while(i<n && j<m){
        if(abs(a[i]-b[j])<=k){
            res++;
            i++; j++;
        }
        else if(a[i]<(b[j]-k)){
            i++;
        }
        else if(a[i]>(b[j]+k)){
            j++;
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
