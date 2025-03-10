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
   int l,r,x;
   int maxi=-1;
   for(int i=0;i<n-1;i++)
   {
    int count=0;
    int j;
    for(j=i+1;j<n;j++)
    {
        if(a[j]<a[i])
        {
            count++;
            x=j;
        }
        else if(a[j]>a[i]) 
        {
            count--;
        }
        if(count>maxi)
        {
        maxi=count;
        l=i;
        r=x;
        }
    }

   }
   //cout<<maxi<<'\n';
   if(maxi==-1||maxi==0)
   {
    cout<<n<<" "<<n<<'\n';
   }
   else
   {
     cout<<l+1<<" "<<r+1<<'\n';
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

