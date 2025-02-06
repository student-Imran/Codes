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
   int s=0,s1=0,c=0,c1=0,m1=-1,m2=-1;
   for(int i=0;i<n;i++)
   {
     cin>>a[i];
     if(i%2==0)
     {
     	if(a[i]>m1)
     	{
     		m1=a[i];
     		c++;
     	}
     	else
     	{
     		c++;
     	}
     	
     	
     }
     else
     {
     	if(a[i]>m2)
     	{
     		m2=a[i];
     		c1++;
     	}
     	else
     	{
     		c1++;
     	}
     	
     }
   }
   if((m1+c)>(m2+c1))
   {
   	cout<<m1+c<<endl;
   }
   else
   	{
    cout<<m2+c1<<endl;
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

