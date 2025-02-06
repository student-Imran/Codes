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
   ll n,i,j=0,one=0,zero=0;
   cin>>n;
   string s;
   cin>>s;
   for(i=0;i<n;i++)
   {
    if(s[i]=='1')
    {
        
        if(s[i-1]=='0'&&i>0)
        {
            one++;
            zero++;
        }
        else
        {
             one++;
        }
    }
   }
   if(s[n-1]=='0')
   {
    zero++;
   }
 
   if(zero>=one)
   {
    cout<<"NO"<<endl;
   }
   else
   {
    cout<<"YES"<<endl;
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

