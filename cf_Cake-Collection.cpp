#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
void solve()
{
   ll n,m;cin>>n>>m;
   int a[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   ll sum=0;
   sort(a,a+n);
    for(int i=n-1;i>=0;i--){
        sum+=(a[i])*m;
        m--;
        if(m==0){
          break;
        }
    }
    cout<<sum<<'\n';
   

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

