#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
void solve()
{
   ll n, m;cin>>n>>m;
   ll left=n-1;
   ll right=left+left-1;
   ll sum=left*(left+1)/2LL;
   if(sum==right){
    if(m>=left and m<=right){
        cout<<1<<'\n';
    }
    else{
        cout<<-1<<'\n';
    }
   }
   else{
    if(m==sum){
        cout<<1<<'\n';
        ll x=1,y=2;
        for(int i=1;i<n-1;i++){
            cout<<x<<" "<<y<<'\n';
            x=y;
            y++;
        }
    }
    else if(m>=left and m<=right){
        cout<<1<<'\n';
    }
    else{
        cout<<-1<<'\n';
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

