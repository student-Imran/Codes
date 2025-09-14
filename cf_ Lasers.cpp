#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
void solve()
{
   int n,m,x,y;cin>>n>>m>>x>>y;
   int a[n],b[m];
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   for(int i=0;i<m;i++){
    cin>>b[i];
   }
   if(n==m){
    cout<<n*2<<'\n';
   }
   else{
    cout<<n+m<<'\n';
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

