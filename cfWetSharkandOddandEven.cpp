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
   ll n;
   cin>>n;
   ll a[n];
   ll s=0;
   for(int i=0;i<n;i++)
   {
   	cin>>a[i];
   	s+=a[i];
   }
   sort(a,a+n);
   for(int i=0;i<n;i++)
   {
     if(s%2!=0)
     {
     	if(a[i]%2==1)
     	{
     		s-=a[i];
     	}
     }
     else
     {
     	break;
     }

   }
   cout<<s<<endl;
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

