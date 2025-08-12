#include<bits/stdc++.h>
using namespace std; 

void solve()
{
  int n;cin>>n;
  int a[n];
  for (int i = 0; i < n; ++i)
  {
    cin>>a[i];
  }
  set<int>segment;
  segment.insert(a[0]);
  set<int>new_segment ;
  int ans=1;
  for(int j=1;j<n;j++)
  {
    if (segment.find(a[j])!=segment.end() and segment.size()>0)
    {
      segment.erase(segment.find(a[j]));
    }
    new_segment.insert(a[j]);
    if (segment.size()==0)
    {
      ans++;
      segment=new_segment;
      new_segment.clear();
    }
  }cout<<ans<<"\n";

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

