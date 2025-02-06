#include<bits/stdc++.h>
using namespace std;


#define ff first
#define ss second
#define pb push_back
#define ll long long int
#define all(v) (v).begin(),(v).end()
#define set_bits __builtin_popcountll 
bool b[100010];  
bool check(int x)
{
    if(b[x]==true)
    {
        return false;
    }
    else if((b[x+1]==true)||(b[x-1]==true))
    {
        b[x]=true;
        return true;
    }
    
    else
    {
        return false;
    }
}


void solve()
{
  
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
    if(i==0)
    {
       b[a[i]]=true;
    }
    else
        {
            cin>>a[i];
            b[a[i]]=false;

        }
   }
   int c=0;
   for(int i=1;i<n;i++)
   {
    if(check(a[i]))
    {
        continue;
    }
    else
    {
        c++;
        break;
    }
   }
   if(c==0)
   {
    cout<<"YES"<<endl;
   }
   else
   {
    cout<<"NO"<<endl;
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
 