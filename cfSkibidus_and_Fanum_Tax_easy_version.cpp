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
   int n,x,m;
   cin>>n>>x;
   int a[n];
   for(int i=0;i<n;i++)
   {
      cin>>a[i];
      //a[i]=m-a[i];
   }
   cin>>m;
   int mini;
   int ans=0;
   for (int i = 0; i <n; ++i)
   {
      int x1=m-a[i];
      if(i==0)
      {
         if(x1<=a[i])
         {
           
            a[i]=x1;
         }
      
      }
      else
      {
         int p=min(x1,a[i]);

      if(p>=a[i-1])
      {
    a[i]=p;
   
      }
      else
      {
        a[i]=max(x1,a[i]);
      }
      
   }
  }
   
   if(n==1)
   {
      cout<<"YES"<<'\n';
   }
   else
   {
    if(is_sorted(a,a+n))
    {
      cout<<"YES"<<'\n';
    }
    else
    {
      cout<<"NO"<<'\n';
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
