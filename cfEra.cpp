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
   ll a[n];
   for(int i=0;i<n;i++)
   {
      cin>>a[i];
   }
   ll c=1LL;
   ll s=0LL;
   for(int i=0;i<n;i++)
   {
      if(a[i]<=c)
      {
         c++;
      }
      else
      {
      
            s+=a[i]-c;
            c=c+(a[i]-c)+1;
         
        
        
      }
      
   }cout<<s<<endl;
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

