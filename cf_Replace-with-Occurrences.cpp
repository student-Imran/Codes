#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
void solve()
{
   int n;cin>>n;
   set<int>s;
   int a[n];
   int one=0;
   for(int i=0;i<n;i++){
    cin>>a[i];
    s.insert(a[i]);
    if(a[i]==1){
      one++;
    }
   }
   ll sum = 0;
   for(auto x:s){
      sum+=x;
   }
   if(one>0 and sum!=1){
    sum+=one-1;
   }
   if(sum==1){
    for(int i=1;i<=n;i++){
      cout<<i<<" ";
    }cout<<'\n';
   }
   else if(sum==n){
      for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
      }cout<<'\n';
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

