#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
void solve()
{
   ll n;cin>>n;
   int count=0;
   int ans=0;
   for(ll i=1;i<1000;i++){
    if(n%i==0){
        count++;
    }
    else{
        ans=max(ans,count);
        count=0;
    }
   }cout<<ans<<'\n';
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

