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
   ll n,l,r,x;
   cin>>n>>l>>r>>x;
   vector<ll>v;
   for(int i=0;i<n;i++)
   {
    ll x;
    cin>>x;
    v.pb(x);
   }
   vector<vector<ll>>subsets;
  ll mask =0;
  ll t=(1<<n);
  for(mask=0;mask<t;mask++)
  {
    vector<ll>sub;
    for (int i = 0; i < n; i++)
    {
        if((mask&(1<<i))!=0)
        {
            sub.pb(v[i]);
         
        }
    }
    subsets.pb(sub);

  }
  ll c=0;

  for(auto s:subsets)
  {
     ll m=-1,mi=10000000,su=0;
   for(auto ele:s)
   {
      su+=ele;

      if(ele>m)
      {
        m=ele;
      }
      if(ele<mi)
      {
        mi=ele;
      }
   }
   
   if((su<=r)&&(su>=l)&&((m-mi)>=x))
            {
                //cout<<su<<" "<<m<<" "<<mi<<endl;
                c++;
            }
   
  }
  cout<<c<<endl;
  
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    /*int t;
    cin>>t;
    while(t--)
    {*/
        solve();
    //}
    return 0;

}

