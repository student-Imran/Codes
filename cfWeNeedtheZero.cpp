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
   int Xor=0;
   for(int i=0;i<n;i++)
   {
   	cin>>a[i];
   	Xor=(Xor^a[i]);

   }
   if(n&1)
   {
       cout<<Xor<<endl;
   }
   else
   {
   	if(Xor==0)
   	{
   		cout<<"5"<<endl;
   	}
   	else
   	{
   		cout<<"-1"<<endl;
   	}
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

