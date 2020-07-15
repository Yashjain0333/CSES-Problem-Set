#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long
#define f first
#define s second
#define pb push_back
 
void solve(){
    int n;  cin>>n;
    vector<int> a(n);
    map<int,int> m;
    for(int i=0;i<n;i++) cin>>a[i];
    int res = 0;
    for(int i=0,j=0;i<n;i++){
        while(j<n && m[a[j]]<1){
            m[a[j]]++; j++;
        }
        res = max(res,j-i);
        m[a[i]]--;
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
