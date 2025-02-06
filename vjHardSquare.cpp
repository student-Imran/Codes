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
   for(int i=0;i<n;i++)
   {
   	for(int j=0;j<n;j++)
   	{
   		
   		if(i==0||i==n-1||j==n-1)
   		{
   			cout<<"* ";
   			//continue;
   		}
   		
   		else
   		{
   			continue;
   		}
   	
   	}
   	cout<<endl;
   }

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

