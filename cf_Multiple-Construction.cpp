#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
void solve()
{
    int  n;cin>>n;
    int x = n;
    for(int i=1;i<=n;i++){
        cout<<x--<<" ";
        if(x==0){
          cout<<n<<" ";
          for(int j=1;j<n;j++){
            cout<<j<<" ";
          }
          cout<<'\n';
          return;
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

