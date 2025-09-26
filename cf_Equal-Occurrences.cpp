#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
void solve()
{
  int n;cin>>n;
  map<int,int>m;
  int max_num=0;
  int  maxi =-1;
  vector<int> v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
    m[v[i]]++;
    if(m[v[i]]>maxi){
      max_num=m[v[i]];
      maxi=max_num;
    }
  }  
  int ans=-1;
  for(int i=1;i<=max_num;i++){
    int ind =0;
    int pre_x=v[ind];
    int count=1;
    for(auto x:v){
      // cout<<"i "<<i<<'\n';
      // cout<<"x "<<x<<" "<<"m[x] "<<m[x]<<'\n';
      // cout<<"pre_x "<<pre_x<<'\n';
      if(m[x]>=i){
         if(x!=pre_x){
          count++;
          pre_x=x;
          // cout<<"Count "<<count<<'\n';
         }
      }
      else{
        pre_x=v[++ind];
      }
     
    }
    
    ans=max(ans,count*i);
  }
  cout<<ans<<'\n';
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

