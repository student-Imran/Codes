#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
   	cin>>a[i];
   }
   sort(a,a+n);
   int x=n/2;
   if(n&1)
   {
   	
   	cout<<a[x+1]<<'\n';
   }
   else
   {
     cout<<a[1]<<'\n';
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

