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
   ll a[n];
   ll b[n];
   for(int i=0;i<n;i++)
   {
   	cin>>a[i];
   }
   for(int i=0;i<n;i++)
   {
   	cin>>b[i];
   }
   sort(a,a+n);
   sort(b,b+n);
   int c=0;
   for(int i=0;i<n;i++)
   {
   	if(a[i]!=b[i])
   	{
       c++;
       cout<<"no"<<endl;
       break;
   	}
   }
   	if(c==0)
   	{
   		cout<<"yes"<<endl;
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

