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
   int c=0;
   for(int i=0;i<n;i++)
   {
   	cin>>a[i];
   	if(i>0)
   	{
   		int x;
   		x=abs(a[i]-a[i-1]);
   	if(x<=1)
   	{
   		c++;
   		break;
   	}
   }
   }
   //cout<<c<<endl;
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

