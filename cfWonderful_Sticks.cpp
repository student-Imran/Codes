#include<bits/stdc++.h>
using namespace std; 
void solve()
{
   int n;cin>>n;
   string s;cin>>s;
   int choto=count(s.begin(),s.end(),'<');
   int boro=choto+2;
   int suru=choto+1;
   cout<<suru<<" ";
   for(int i=0;i<s.size();i++){
    if(s[i]=='<'){
        cout<<choto<<" ";
        choto--;
    }
    else if(s[i]=='>'){
        cout<<boro<<" ";
        boro++;
    }
   }
   cout<<'\n';
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

