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
   int n;
   cin>>n;
   ll a[n];
   ll b[n];
   int c=0;
   int k=-1;
   for(int i=0;i<n;i++)
   {
   	cin>>a[i];
     b[i]=abs(a[i]);
     if(a[i]>0&&c==0)
     {
       k=i;
       c=1;
     }
   }
   ll p_b[n];
   p_b[0]=b[0];
   for(int i=1;i<n;i++)
   {
   	p_b[i]=p_b[i-1]+b[i];
   }
   ll ans=0;
   for(int i=0;i<n;i++)
   {
   	
   	    if(i>0)
   		{if((p_b[n-1]-p_b[k-1]>p_b[k]-b[k]))
   	{
   		ans+=p_b[n-1]-p_b[k-1];
   		p_b[k]=0;

   	}
   	else
   	{
   		ans+=b[i];
   	}
         
         }
   
   }cout<<ans<<'\n';
   

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

