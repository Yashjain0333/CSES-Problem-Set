#include <bits/stdc++.h> 
using namespace std; 
#define MOD 1000000007
#define ll long long
#define f first
#define s second
#define pb push_back
 
// Driver program 
void solve() { 
    string s;
    cin>>s;
    vector<string> res;
    sort(s.begin(),s.end());
    do{
        res.pb(s);
    }while(next_permutation(s.begin(),s.end()));
    cout<<res.size()<<endl;
    for(int i=0;i<res.size();i++) cout<<res[i]<<"\n";
} 
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1; 
    // cin>>t;
    while (t--) 
        solve();
}
