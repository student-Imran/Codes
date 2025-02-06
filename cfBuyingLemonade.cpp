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
   ll n;
   ll k;
   cin>>n>>k;
   ll a[n];
   for(int i=0;i<n;i++)
   {
      cin>>a[i];
   }
   sort(a,a+n);
   ll c=0LL;
   for(ll i=0;i<n;i++)
     {
      int mini=*min_element(a[i],a+n);
      k-=(mini*(n-i));
  }
  for(ll i=0;i<n&&x1>0;i++)
     {
      if(a[i]>0)
      {
         x1--;
         
      }
      else
     {
      c++;
      //sum+=a[i]+x;
     }
  }
  

  //ll s1=k-sum;
  cout<<k+c<<endl;

  
   }
   
  //cout<<s1+c+sum<<endl;
     
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