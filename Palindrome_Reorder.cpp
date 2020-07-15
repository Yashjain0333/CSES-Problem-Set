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
    vector<int> m(26,0);
    for(int i=0;i<s.length();i++){
        m[s[i]-'A']++;
    }
    string res = "";
    bool foo = true;
    char mid;
    for(int i=0;i<26;i++){
        if((m[i]%2)==1 && !foo){
            cout<<"NO SOLUTION";
            return;
        }
        if(m[i]%2==1 && foo){
            foo = false;
            mid = 'A' + i;
        }
        int x = m[i];
        for(int j=0;j<x/2;j++){
            res += ('A'+i);
        }
    }
    if(!foo){
        res += mid;
    }
    for(int i=25;i>=0;i--){
        int x = m[i];
        for(int j=0;j<x/2;j++){
            res += ('A'+i);
        }
    }
    cout<<res;
} 
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1; 
    // cin>>t;
    while (t--) 
        solve();
}
