#include<bits/stdc++.h>
using namespace std; 
void solve()
{
   int n,m,l,r;cin>>n>>m>>l>>r;
   if(abs(l)>=m){
    cout<<-1*m<<" "<<0<<'\n';
   }
   else if(r>=m){
    cout<<0<<" "<<m<<'\n';
   }
   else{
    int mi=max(abs(l),r);
    if(mi==abs(l)){
        cout<<l<<" "<<m-mi<<'\n';
    }
    else{
        cout<<-1*(m-r)<<" "<<r<<'\n';
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

