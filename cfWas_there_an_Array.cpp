#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
   int n;cin>>n;
   int b[n-2+1];
   for(int i=0;i<n-2;i++)
   {
    cin>>b[i];
   }
   int x=n-2;
   int ok=0;
   for(int i=0;i<n-2;i++)
   {
    if(i+2<x)
    {
    if(b[i]==1 and b[i+1]==0 and b[i+2]==1)
    {
      ok=1;
      break;
    }
    }
   }if(ok==0)
   {
    cout<<"YES\n";
   }
   else
   {
    cout<<"NO\n";
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

