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
   for(int i=0;i<n;i++)
   {
       cin>>a[i]; 
   }
   int c=0;
   ll x;
   for(int l=0;l<n;l++)
   {
   	for(int r=l;r<n;r++)
   	{
   		 x=a[l];
   		 int p=0;
   		for(int i=l;i<=r;i++)
   		{
   			if(a[i]>=x)
   			{
   				x=a[i];
   				
   			}
   			else
   			{     
   		p++;
   				break;
   			}
   			
   		}
   		if(p==0)
   		{
   			c++;
   		}
   	
   		
   	}
   }
   cout<<c<<endl;
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

