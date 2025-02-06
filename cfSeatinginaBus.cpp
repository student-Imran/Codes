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
   for(int i=0;i<n;i++)
   {
   	cin>>a[i];
   }
   int x,y;
   x=a[0];
   y=a[0];
   int c=0;
   for(int i=1;i<n;i++)
   {
   	if(a[i]==x-1)
   	{
   		x--;
   	}
   	else if(a[i]==y+1)
   	{
   		y++;
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

