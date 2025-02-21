#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        
    } 
    int ok=0;
        for(int i=0;i<n;i++)
        {
            if(i+2<n)
            {
           int gc=__gcd(a[i],a[i+2]);
           //cout<<gc<<'\n';
           if(a[i+1]%gc!=0)
           {
            ok=1;
            break;
           }
            }
            
        }
        if(ok==0)
        {
            cout<<"YES\n";
        }
        else
        {
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

