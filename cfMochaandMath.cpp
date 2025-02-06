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
   int x;
   for(int i=0;i<n;i++)
   {
   	cin>>a[i];
   }
    x=a[0];
    //cout<<x<<endl;
   for(int i=1;i<n;i++)
   {
   	x=x&a[i];
   }
   cout<<x<<endl;
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

