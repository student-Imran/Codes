#include<bits/stdc++.h>
using namespace std; 

void solve()
{
  int n;cin>>n;
  vector<int>v(n),q(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  for(int i=0;i<n;i++){
    cin>>q[i];
  }
  if(v[n-1]!=q[n-1]){
    cout<<"NO\n";
    return;
  }
  for (int i = n-2; i >=0; --i)
  {
    if(v[i]!=q[i]){
      int x_or1=(v[i]^v[i+1]);
      int x_or2=(v[i]^q[i+1]);
      if((x_or1!=q[i] and x_or2!=q[i])){
         cout<<"NO\n";
         return;
      }
    }
  }cout<<"YES\n";
  
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

