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
   int n,l,r;
   cin>>n>>l>>r;
   int a[n];
   for (int i = 0; i <n; ++i)
   {
       cin>>a[i];
   }
   sort(a,a+(n-l));
   for (int i = 0; i <n; ++i)
   {
       cout<<a[i]<<" ";
   }cout<<'\n';
   /*int x=r-l+1;
   ll s=0;
   for(int i=0;i<x;i++)
   {
    s+=a[i];
   }cout<<s<<'\n';*/
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

