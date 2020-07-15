#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long
#define f first
#define s second
 
void solve(){
    int n,m;
    cin>>n>>m;
    set<pair<int,int>> s;
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        s.insert({tmp,i});
    }
    for(int i=0;i<m;i++){
        int tmp;
        cin>>tmp;
        auto it = s.lower_bound({tmp+1,0});
        if(it==s.begin()){
            cout<<-1<<"\n";
        }
        else{
            --it;
            cout<<it->f<<"\n";
            s.erase(it);
        }
    }
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1; 
    //cin>>t;
    while (t--) 
        solve();
}
