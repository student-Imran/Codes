#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
void solve()
{
   ll k,x;cin>>k>>x;
   while(k--){
    x=x*2LL;
   }
   cout<<x<<'\n';
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

