#include<bits/stdc++.h>
using namespace std;


#define ff first
#define ss second
#define pb push_back
#define ll long long int
#define all(v) (v).begin(),(v).end()
#define set_bits __builtin_popcountll  


void solve()
{
   int n;cin>>n;
   int ok=0;
 
     
     for(int i=2;i<n;i++)
     {
        int k=n-i;
        if(__gcd((i-1),k)==1 and k!=1 and i-1!=1)
        {
            cout<<i-1<<" "<<k<<" "<<1<<'\n';
            break;
        }
        else if(__gcd((k-1),i)==1 and k-1!=1 and i!=1)
        {
            cout<<k-1<<" "<<i<<" "<<1<<'\n';
            break;
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

