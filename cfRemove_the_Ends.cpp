#include<bits/stdc++.h>
using namespace std;


#define ff first
#define ss second
#define pb push_back
#define ll long long int
#define all(v) (v).begin(),(v).end()
#define set_bits __builtin_popcountll  


void solve()
{
   int n;cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
   }
   vector<ll>suff(n+9),pre(n+9);
   suff[n]=0;
   pre[0]=0;
   for(int i=0;i<n;i++)
   {
     if(a[i]>0)
     {
        pre[i+1]=pre[i]+a[i];
     }
     else
     {
        pre[i+1]=pre[i];
     }
   }
   for(int i=n-1;i>=0;i--)
   {
     if(a[i]<0)
     {
        suff[i]=suff[i+1]+abs(a[i]);
     }
     else
     {
        suff[i]=suff[i+1];
     }
   }
   ll  p=0,ne=0,max1=0,max2=0;
   for(int i=0;i<n;i++)
   {
    ll sum1=0;
    if(a[i]>0)
    {
        p+=a[i];
    }
    else
    {
        sum1+=suff[i];
    }
    max1=max(max1,p+sum1);
   }
   for(int i=n-1;i>=0;i--)
   {
    ll sum2=0;
    if(a[i]<0)
    {
        ne+=abs(a[i]);
    }
    else
    {
        sum2+=pre[i];
    }
    max2=max(max2,ne+sum2);
   }
   cout<<max(max1,max2)<<'\n';
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

