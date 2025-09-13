#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
void solve()
{
  ll a,b;cin>>a>>b;
  if(a%2==0 and b%2==0){
    cout<<a*(b/2)+2<<'\n';
  }
  else if(a%2==1 and b%2==1){
    cout<<(a*b)+1<<'\n';
  }
  else if(b%2==1){
    cout<<-1<<'\n';
  }
  else{
    if((b/2)%2==1){
      cout<<-1<<'\n';
    }
    else{
      cout<<a*(b/2)+2<<'\n';
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

