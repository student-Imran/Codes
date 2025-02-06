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
   ll n,k;
   cin>>n>>k;
   ll a[k];
   for(int i=0;i<k;i++)
   {
      cin>>a[i];
   }
   sort(a,a+k);
   ll x=0LL,c=0LL;
   for(int i=k-1;i>=0;i--)
   {
    if(x<n)
    {
      x=x+(n-a[i]);
    c++;

    }
    else
    {
      
      break;
    }

   } cout<<c-1<<endl;
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

