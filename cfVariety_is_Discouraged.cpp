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
   int a[n];
   map<int,int>m;
   for(int i=0;i<n;i++)
   {
   	cin>>a[i];
   	m[a[i]]++;
   }
   if(n==1)
   {
   	cout<<1<<" "<<1<<'\n';
   }
   else
   {
   int ans=0;
   int len=0;
   int x,i;
   for( i=0;i<n;i++)
   {
   	if(m[a[i]]>1)
   	{
        if(len>ans)
        {
        	ans=len;
        	x=i;
        }
   		
   		len=0;
   	}
   	else
   	{
   		len++;

   	}
   }
   if(len>ans)
   {
   	x=i;
   	ans=len;
   	cout<<x-ans+1<<" "<<x<<'\n';
   }

   else
   {
  
   if(ans==0)
   {
   	cout<<0<<'\n';
   }
   else
   {cout<<x-ans+1<<" "<<x<<'\n';
    //cout<<ans<<'\n';
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

