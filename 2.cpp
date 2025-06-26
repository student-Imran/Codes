#include<bits/stdc++.h>
using namespace std; 
void solve()
{
   int n,x;cin>>n>>x;
   int a[n],b[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   for(int i=0;i<n;i++){
    cin>>b[i];
   }
   int k=-1;
   int c=0;
   for(int i=0;i<n;i++){
    if(b[i]!=-1 and c==0){
      k=a[i]+b[i];
      c=1;
    }
    else if(b[i]==-1 and k!=-1){
      if(a[i]>k){
        cout<<0<<'\n';
        return;
      }
    }
    else if(k!=-1){
       if(a[i]+b[i]!=x){
        cout<<0<<'\n';
        return;
       }
    }
   }
   if(c==0){
      int maxi=*max_element(a,a+n);
      if(maxi>x){
         cout<<0<<'\n';
      }
      else{
        cout<<x-maxi+1<<'\n';
      }
      
   }
   else{
    cout<<1<<'\n';
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

