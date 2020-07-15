#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long
#define f first
#define s second
 
void solve(){
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int res = 0;
    sort(a.begin(),a.end());
    int i = 0, j = n-1;
    for(;i<n && j>i;i++,j--){
        while(i<j && a[i]+a[j]>x){
            j--;
        }
        if(i==j) break;
        res++;
    }
    cout<<n-res;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1; 
    //cin>>t;
    while (t--) 
        solve();
}
