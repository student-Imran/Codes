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
   ll n,k;
   cin>>n>>k;
   ll re=0,di=n;
   if(k==1)
   {
   	cout<<n<<endl;
   }
  else
   {
   	while(di!=0)
   {
    re+=di%k;
    di=di/k;
   	
   }
   cout<<re<<endl;
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

