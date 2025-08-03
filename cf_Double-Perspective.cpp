#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve() {
  
  int n;cin>>n;
  map<int,multiset<int>>m;
  map<int,pair<int,int>>m_index;
  for (int i = 0; i < n; ++i)
  {
    int l,r;
    cin>>l>>r;
    m[l].insert(r);
    m_index.insert({i+1,{l,r}});
  }
  int vis[2*n+10]={0};
  vector<int>ans;
  for(auto x:m){
    for(auto y:m[x.first]){
      if (vis[x.first]==1 and vis[y]==1)
      {
         continue;
      }
      else{
        ans.push_back(x.first);
        ans.push_back(y);
        vis[x.first]=1;
        vis[y]=1;
      }
    }
  }
  int d=ans.size();
  cout<<d/2<<'\n';
  set<int>index;
  for (int i = 0; i <d ; i=i+2)
  {
    for(auto ind:m_index){
    if (ans[i]==ind.second.first and ans[i+1]==ind.second.second)
    {
     index.insert(ind.first);
    }
    }
   
  }
  for(auto a:index){
    cout<<a<<" ";
  }cout<<'\n';
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int tt = 1; 
  cin >> tt; 
  while (tt--) {
    solve();
  }
}