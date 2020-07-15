#include <bits/stdc++.h> 
using namespace std; 
#define ll long long
#define f first
#define s second
#define pb push_back
 
bitset<8> c,d1,d2;
void help(int& res, vector<vector<char>> b, int i){
    if(i==8){
        res++;
        return;
    }
    for(int j=0;j<8;j++){
        if(b[i][j]=='*') continue;
        if(!c[j] && !d1[i+j] && !d2[i-j+7]){
            c[j] = d1[i+j] = d2[i-j+7] = 1;
            help(res,b,i+1);
            c[j] = d1[i+j] = d2[i-j+7] = 0;
        }
    }
}
void solve() { 
    vector<vector<char>> b(8,vector<char>(8));
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>b[i][j];
        }
    }
    int res = 0;
    help(res,b,0);
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
