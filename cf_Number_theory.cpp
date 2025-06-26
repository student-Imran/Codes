#include<bits/stdc++.h>
using namespace std; 
void solve()
{
   int n;cin>>n;
   string s;cin>>s;
   string s1="14689";
   map<char,int>m1;
   map<char,int>m2;
   int ok=0,ok1=0;
   for(int i=0;i<5;i++){
    m1[s1[i]]++;
   }
   char ch,ch1;
   for(int i=0;i<n;i++){
    m2[s[i]]++;
    if(m1[s[i]]>0 and m2[s[i]]<=m1[s[i]]){
      ok=1;
      ch=s[i];
    }
    else if(m2[s[i]]>1){
      ch1=s[i];
      ok1=1;
    }
   }
   if(ok==1){
    cout<<1<<'\n';
    cout<<ch<<'\n';
   }
   else if(ok1==1){
    cout<<2<<'\n';
    cout<<ch1<<ch1<<'\n';
   }
   else{
    for(int i=0;i<n-1;i++){
      for(int j=i+1;j<n;j++){
          int x=s[i]-'0';
          int y=s[j]-'0';
          int z=x*10+y;
          for(int i=2;i*i<=z;i++){
            if(z%i==0){
              cout<<2<<'\n';
              cout<<z<<'\n';
              return;
            }
          }
      }
    }
   }
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

