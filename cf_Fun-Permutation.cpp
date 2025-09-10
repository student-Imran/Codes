#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
void solve()
{
   int n;cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   if(n==2){
    for(int i=0;i<n;i++){
      if(a[i]==1){
        cout<<2<<" ";
      }else{
        cout<<1<<" ";
      }
    }cout<<'\n';
    return;
   }
   for(int i=0;i<n;i++){
    if(a[i]==n){
      cout<<a[i]<<" ";
    }
    else{
      cout<<n-a[i]<<" ";
    }
   }cout<<'\n';
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

