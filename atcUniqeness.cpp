#include<bits/stdc++.h>
using namespace std;  
void solve()
{
  int n;cin>>n;
  int a[n];
  map<int,int>m;
  for(int i=0;i<n;i++){
    cin>>a[i];
    m[a[i]]++;

  }int ok=0;
  for(auto x: m){
    if(x.second==1){
        ok=1;
    }
  }
  if(ok==0){
    cout<<-1<<'\n';
  }
  else{
    int ans;
    int maxi=-1;
    for(int i=0;i<n;i++){
        if(m[a[i]]==1 and a[i]>maxi){
            ans=i+1;
            maxi=a[i];
            //cout<<a[i]<<'\n';
        }
    }cout<<ans<<'\n';
  }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    
    return 0;

}

