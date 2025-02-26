#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
   int n;cin>>n;
   string s;cin>>s;
   int c1=0;
   int c2=0;
   for(int i=0;i<n;i++)
   {
    if(s[i]=='-')
    {
        c1++;
    }
    else if(s[i]=='_')
    {
        c2++;
    }
    else
    {
        c2+=2;
    }
   }
   double k=(double)c1/2.0;
   //cout<<k<<'\n';
   ll x=k*k;
   cout<<1LL*(x*c2)<<'\n';

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

