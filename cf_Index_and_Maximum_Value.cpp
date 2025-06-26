#include<bits/stdc++.h>
using namespace std;
void solve()
{
   int n;cin>>n;
   string s;cin>>s;
   map<char,int>m;
   for(int i=0;i<n;i++){
    m[s[i]]++;
   }
   int ok;
   while(1){
    ok=0;
   for(auto x:m){
    if(x.second>0){
       m[x.first]--;
       cout<<x.first;
    }
    if(m[x.first]==0){
       ok++;
    }
   }
   if(ok==m.size()){
    break;
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

