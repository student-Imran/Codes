#include<bits/stdc++.h>
using namespace std; 
void solve()
{
  int n,m;cin>>n>>m;
  int f1=1,f2=2,f=0;
  if(n>2){
    n=n-2;
    while(n--){
       f=f1+f2;
       f1=f2;
       f2=f;
    }
   

  }
  else{
    f=n;
  }
  for(int i=0;i<m;i++){
    int w,l,h;cin>>w>>l>>h;
    if(w<f or l<f or h<f){
      cout<<0;
    }
    else if(w>=f and l>=f and h>=f){
       int maxi=max(w,max(l,h));
       int final=f+f1;
       if(maxi>=final){
        cout<<1;
       }else{
        cout<<0;
       }

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