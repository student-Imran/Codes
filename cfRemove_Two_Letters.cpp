#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
   int n;cin>>n;
   string s;cin>>s;
   int ans=n-1;
   int count=0;
   s.push_back('A');
   for(int i=0;i<n-1;i++)
   {
    
    if(s[i]==s[i+1])
    {
        count++;
    }
    else
    {
        if(count>0)
        {
        ans-=(count-1);
        count=0;
        }
        
    }
    if(s[i]==s[i+2] and s[i]!=s[i+1])
    {
        ans--;
    }
    

   }
   if(count>0)
   {
    cout<<ans-(count-1)<<'\n';
   }
   else
   {
    cout<<ans<<'\n';
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

