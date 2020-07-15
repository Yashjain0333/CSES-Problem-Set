#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long
#define f first
#define s second
#define pb push_back
 
void solve(){
    int n,x;
    cin>>n>>x;
    int r1 = 0, r2 = 0;
    map<int,int> m;
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        if(m[x-tmp] && !r1 && !r2){
            r1 = m[x-tmp];
            r2 = i+1;
        }
        m[tmp] = i+1;
    }
    if(r1 && r2){
        cout<<r1<<" "<<r2;
    }
    else cout<<"IMPOSSIBLE";
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1; 
    //cin>>t;
    while (t--) 
        solve();
}
