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
   int k,l,m,n,d;
   cin>>k>>l>>m>>n>>d;
   int c=0;
   for(int i=1;i<=d;i++)
   {
   	if((i%k!=0)&&(i%l!=0)&&(i%m!=0)&&(i%n!=0))
   	{
   		c++;
   		//cout<<i<<" ";
   	}
   }cout<<d-c<<endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	/*int t;
	cin>>t;
	while(t--)
	*/
	{
		solve();
	}
	return 0;

}

