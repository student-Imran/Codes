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
   multiset<int>s;
   for(int i=0;i<n;i++)cin>>a[i];
   	ll sum=0;
   for(int i=0;i<n;i++)
   {
   	s.insert(a[i]);
   	if(a[i]==0)
   	{
   		int power=(*(--s.end()));
   		sum+=power;
   		auto it=s.find(power);
   		s.erase(it);
   	}
   }
   cout<<sum<<'\n';
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

