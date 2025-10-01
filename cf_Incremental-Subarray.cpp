#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
void solve()
{
    int n,m;cin>>n>>m;
    int a[m];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    int x = a[0];
    for(int i=1;i<m;i++){
        if(x>=a[i]){
            cout<<1<<'\n';
            return;
        }
        else{
            x=a[i];
        }
    }
    if(a[0]==1 and a[1]==1 and m==2){
        cout<<1<<'\n';
        return;
    }
    cout<<n-x+1<<'\n';

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

