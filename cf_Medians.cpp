#include<bits/stdc++.h>
using namespace std; 
void solve()
{
  int n,k;cin>>n>>k;
  if(n!=1 and n == k or (k==1 and n!=1)){
    cout<<-1<<'\n';
  }
  else if(n==1){
    cout<<1<<'\n';
    cout<<1<<'\n';
  }
  else if(k%2==0){
    cout<<3<<'\n';
    cout<<1<<" "<<k<<" "<<k+1<<'\n';
  }
  else{
    cout<<3<<'\n';
    cout<<1<<" "<<k-1<<" "<<k+2<<'\n';
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

