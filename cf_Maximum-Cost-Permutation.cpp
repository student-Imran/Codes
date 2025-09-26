#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
void solve()
{
  int n;cin>>n;
  int a[n+1];
  map<int,int>m;
  for(int i=1;i<=n;i++){
    cin>>a[i];
    m[a[i]]++;
  }
  vector<int>nai;
  for(int i=1;i<n;i++){
    if(!m[i]){
      nai.push_back(i);
    }
  }
  for(auto x:nai){
    cout<<x<<" ";
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

