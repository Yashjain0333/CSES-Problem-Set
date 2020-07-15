#include <bits/stdc++.h> 
using namespace std; 
#define ll long long
#define f first
#define s second
#define pb push_back
  
// Driver program 
void solve() { 
    string s;
    cin>>s;
    int res = 1;
    char cur = s[0];
    int result = 1;
    for(int i=1;i<s.length();i++){
        if(cur == s[i]) res++;
        else {
            res = 1;
            cur = s[i];
        }
        result = max(res,result);
    }
    cout<<result;
} 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1; 
    //cin>>t;
    while (t--) 
        solve();
}
