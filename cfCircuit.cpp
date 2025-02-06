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
   int a[n*2];
   for(int i=0;i<2*n;i++)
   {
   	cin>>a[i];
   }
   int c0=0;
   c0=count(a,a+2*n,0);
   int c1=0;
   c1=2*n-c0;
   int m=0;
   m=min(c0,c1);
   //cout<<c0<<" "<<c1<<endl;
   if((c0&1)||(c1&1))
   {
   	cout<<"1"<<" "<<m<<endl;
   }
   else
   {
   	cout<<"0"<<" "<<m<<endl;
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

