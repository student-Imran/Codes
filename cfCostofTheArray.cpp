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
   int n,k;
   cin>>n>>k;
   ll a[n];
   vector<int>v;
   for (int i = 0; i <n; ++i)
   {
    cin>>a[i];
    if(i&1)
    {
        v.pb(a[i]);
    }
   }
   if(n==k)
   {
    int c1=1;
    for (int i =0;i<v.size(); ++i)
    {
        if(v[i]==c1)
        {
            c1++;
        }
        else
        {
            cout<<c1<<'\n';
            break;
        }
    }
    
    if(c1-1==v.size())
    {
        cout<<c1<<'\n';
    }
   }
   else
   {
    //cout<<n<<" "<<k<<'\n';
   int x=n-(k-1);
   int c=1;
   for(int i=1;i<=x;i++)
   {
    if(a[i]!=1)
    {
        c=0;
        break;
    }
   }
   if(c==0)
   {
    cout<<"1"<<'\n';
   }
   else
   {
    cout<<"2"<<'\n';
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
