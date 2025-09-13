#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
void solve()
{
   int n;cin>>n;string s;cin>>s;
   int zero = count(s.begin(),s.end(),'0');
   int ans = zero;
   for(int i=0;i<zero;i++){
        if(s[i]=='0'){
           ans--;
        }
   }
   cout<<ans<<'\n';
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

