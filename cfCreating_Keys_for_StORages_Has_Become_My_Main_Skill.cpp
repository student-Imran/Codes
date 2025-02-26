#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
   ll n,k;cin>>n>>k;
   ll ans_or=0;
   ll ans;
   ll i;
   ll ok=0;
   ll l=0;
   ll y;
   ll final_ans=0;
   for(i=0;i<n-1;i++)
   {
    ans_or=k|l;
    final_ans|=l;
    if(ans_or<=k)
    {
     cout<<l<<" ";
     l++;
    }
    else 
    {
     ok=1;
     y=i;
     break;
    }

   } 
   if(ok==1)
   {
     for(int z=y;z<n;z++)
     {
        cout<<k<<" ";
     }cout<<'\n';
   }
   else if((final_ans|i)==k)
   {
    cout<<i<<'\n';
   }
   else
   {
    cout<<k<<'\n';
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

