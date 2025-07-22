#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
void solve() {
    ll n,l,r,k;
    cin>>n>>l>>r>>k;
    if(n==2){
        cout<<-1<<'\n';
    }
    else if(n&1){
       cout<<l<<'\n';
    }
    else{
        ll x = log2(l); 
        ll y = (1LL << (x + 1LL));

        if(y<=r){
            if(k<=(n-2)){
             cout<<l<<'\n'; 
            }
            else{
                cout<<y<<'\n';
            }
            
        }
        else{
            cout<<-1<<'\n';
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;

}

