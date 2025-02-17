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
   int n;
   cin>>n;
   string s;
   cin>>s;
   int k=-1;
   int ans=0;
   int c0=count(s.begin(),s.end(),'0');
   int ok=0;
      if(c0==n)
      {
         cout<<0<<'\n';
      }
      else if(c0==0)
      {
         cout<<1<<'\n';
      }
      else
      {
   for(int i=0;i<n;i++)
   {
      if(s[i]=='0')
      {
         
         k=i;
      }
      else
      {
      for(int j=k+1;j<n-1;j++)
      {
      if(s[j]!=s[j+1])
      {
         ans++;
      }
      }
      cout<<ans+1<<'\n';
      ok=1;
      break;

   
     }
     if(ok==1)
     {
      break;
     }

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

