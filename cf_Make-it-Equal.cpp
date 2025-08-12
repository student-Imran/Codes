#include<bits/stdc++.h>
using namespace std; 

void solve()
{
   int n,k;cin>>n>>k;
   vector<int> s(n),t(n);
   for (int i = 0; i < n; ++i)
   {
     cin>>s[i];
   }
   for (int i = 0; i < n; ++i)
   {
     cin>>t[i];
   }
   multiset<int>parbo;
   for (int i = 0; i < n; ++i)
   {
      parbo.insert((s[i]%k)); 
   }
   // for(auto x:parbo){
   //  cout<<x<<" ";
   // }cout<<'\n'; 
   for (int i = 0; i < n; ++i)
   {
     if (parbo.find(t[i]%k)!=parbo.end())
     {
       parbo.erase(parbo.find(t[i]%k));
     }
    else if (parbo.find((k-(t[i]%k)))!=parbo.end())
      {
        parbo.erase(parbo.find(k-(t[i]%k)));
      }
     
     else
     {
      cout<<"NO\n";
      return;
     }
     

   }cout<<"YES\n";
   
   
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

