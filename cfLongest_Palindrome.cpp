#include<bits/stdc++.h>
using namespace std;  
void solve()
{
   int n,m;cin>>n>>m;
   map<string,int>mp;
   int ok=1;
   vector<string>first,second;
   for(int i=0;i<n;i++){
    string s;
    cin>>s;
    reverse(s.begin(),s.end());
    mp[s]++;
    if(mp[s]==2){
      first.push_back(s);
      mp[s]=0;
      reverse(s.begin(),s.end());
      second.push_back(s);
      mp[s]=0;
      ok=0;
      
    }
    else{
       mp[s]--;
      reverse(s.begin(),s.end());
      mp[s]++;
      
    }
   }
   vector<string>v(3);
   int len=0;
   int maxi=-1;
   for(auto o:mp){
    //cout<<o.first<<" "<<o.second<<'\n';
    if(o.second==1){
      v[0]=o.first;
      //cout<<v[0]<<'\n';
      len=v[0].size();
      reverse(v[0].begin(),v[0].end());
      //cout<<v[0]<<" "<<o.first<<'\n';
      if(v[0]==o.first){
        maxi=len;
        v[1]=o.first;
        //cout<<v[1]<<'\n';
      }
    }
   }
   if(maxi==-1 and ok==1){
    cout<<0<<'\n';
    return;
   }
   if(maxi!=-1){
    cout<<(first.size()*m)+(second.size()*m)+maxi<<'\n';
   }
   else{
    cout<<(first.size()*m)+(second.size()*m)<<'\n';
   }

   for(auto f:first){
    cout<<f;
   }

   if(maxi!=-1){
    cout<<v[1];
   }
   reverse(second.begin(),second.end());
   for(auto s: second){
    cout<<s;
   }
 
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);


  /*int t;
  cin>>t;
  while(t--)
  */{
    solve();
  }
  return 0;

}

