#include <bits/stdc++.h> 
using namespace std; 
#define ll long long
#define f first
#define s second
#define pb push_back
 
// Driver program 
void solve() { 
    int n;
    cin>>n;
    if(n%4==0){
        cout<<"YES\n";
        cout<<n/2<<"\n";
        for(int i=1;i<=n/2;i+=2){
            cout<<i<<" "<<n-i+1<<" ";
        }
        cout<<"\n";
        cout<<n/2<<"\n";
        for(int i=2;i<=n/2;i+=2){
            cout<<i<<" "<<n-i+1<<" ";
        }
    }
    else if(n%4==3){
        cout<<"YES\n";
        cout<<n/2<<"\n";
        cout<<n<<" ";
        for(int i=2;i<=(n-1)/2;i+=2){
            cout<<i<<" "<<n-i<<" ";
        }
        cout<<"\n";
        cout<<n/2+1<<"\n";
        for(int i=1;i<=(n-1)/2;i+=2){
            cout<<i<<" "<<n-i<<" ";
        }
    }
    else cout<<"NO";
} 
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1; 
    //cin>>t;
    while (t--) 
        solve();
}
