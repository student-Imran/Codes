#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
void solve()
{
   int n;cin>>n;
   vector<vector<int>>v(n+1);
   for(int i=0;i<n;i++){
    int x;cin>>x;
    v[x].push_back(i);
   }
   int num=1;
    vector<int>ans(n+10,0);
   for(int i = 1; i <=n; i++) {
    // cout<<i<<" "<<v[i].size()<<'\n';
        if(v[i].empty()){
          continue;
        }
        else if(v[i].size()%i) {
            cout<<-1<<'\n';
            return;
        }
        else{
          // cout<<"i "<<i<<'\n';
          int final_num=0;
          for(auto ind:v[i]){
            // cout<<"Index "<<ind<<'\n';
            // cout<<num<<" "<<final_num<<'\n';
              ans[ind]=num;
              final_num++;
              if(final_num==i){
                num++;
                final_num=0;
              }
          }
          // cout<<'\n';
        }
    }
    for(auto value:ans){
      if(value){
        cout<<value<<" ";
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

