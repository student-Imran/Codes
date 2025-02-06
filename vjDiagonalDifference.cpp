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
   int a[n][n];
   int s=0,s1=0,re;
   int x=n-1;
   for(int i=0;i<n;i++)
   {
   	for(int j=0;j<n;j++)
   	{
   		cin>>a[i][j];
   		if(i==j)
   		{
   			s+=a[i][j];
   		}
   		if(j==x)
   		{
            s1+=a[i][j];
   			x--;
   		}
   	}
   }
   cout<<abs(s1-s)<<endl;


}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	/*int t;
	cin>>t;
	while(t--)
	{*/
		solve();
	//}
	return 0;

}

