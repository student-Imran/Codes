#include<bits/stdc++.h>
using namespace std;


#define ff first
#define ss second
#define pb push_back 
#define ll long long int 
#define all(v) (v).begin(),(v).end()
#define set_bits __builtin_popcountll

ll fibo(ll x)
{
if(x==1)
{
  return 0;
}
else if(x==2)
{
  return 1;
}
else
{
  return fibo(x-1)+fibo(x-2);
}
}
void solve()
{
int n;
cin>>n;
cout<<fibo(n)<<endl;


}
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   //int t;
   //cin>>t;
   //while(t--)
   {
    solve();
   }
   return 0;
}