#include<bits/stdc++.h>
using namespace std; 
void solve()
{
   int n;cin>>n;
   string s,s1;
   cin>>s>>s1;
   int z=0,z1=0;
  // cout<<s<<" "<<s1<<'\n';
   for(int i=0;i<n;i++){
     if(i%2==0){
        if(s[i]=='0'){
            z++;
        }
        if(s1[i]=='0'){
            z1++;
        }
     }
     else{
        if(s1[i]=='0'){
            z++;
        }
        if(s[i]=='0'){
            z1++;
        }
     }
    }
    //cout<<z<<" "<<z1<<'\n';
   int x=(n+1)/2;
   int y=n/2;
   if(z>=x and z1>=y){
    cout<<"YES\n";
   }
   else{
    cout<<"NO\n";
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

