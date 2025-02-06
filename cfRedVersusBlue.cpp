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
   int n,r,b;
   cin>>n>>r>>b;
   int x=r/(b+1);
   int x1=r%(b+1);
   int c=x;
   int c1=x1;
   for(int i=0;i<n;i++)
   {
     if(c!=0)
     {
     	cout<<"R";
     	c--;
     }
     else
     {
     	if(c1!=0)
     	{
     		cout<<"R";
     		c1--;
     		c=x;
     		cout<<"B";
     		i=i+1;
     	}
     	else
     	{
     		cout<<"B";
     		c=x;
     	}
     	
     }
   }
   cout<<endl;
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

