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
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int> b;
    for(int i=0;i<n;i++){
        if(!b.size()) b.pb(a[i]);
        else if(b[b.size()-1]<=a[i]){
            b.pb(a[i]);
        }
        else{
            for(int j=0;j<(int)b.size();j++){
                if(b[j]>a[i]){
                    b[j] = a[i];
                    break;
                }
            }
        }
    }
    cout<<b.size();
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1; 
    //cin>>t;
    while (t--) 
        solve();
}
