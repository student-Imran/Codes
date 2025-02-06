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
   ll k=0;
   int c=0;
   while(1)
   {
   	for(int i=0;i<n;i++)
   	{
   		if(a[i]%2LL==0)
   		{
           a[i]=a[i]/2;
           continue;
   		}
   		else
   		{
   			
   			c++;
   			break;

   		}
   	}
   	if(c==1)
   	{
   		cout<<k<<endl;
   		break;
   	}
   	else
   	{
k++;
   	}
   	
   }
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	//int t;
	//cin>>t;
	//while(t--)
	//{
		solve();
	//}
	return 0;

}

