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
   string s;
   cin>>s;
   int d;
   d=s.length();
   if(d>10)
   {
   	cout<<s[0]<<d-2<<s[d-1]<<endl;
   }
   else
   {
   	cout<<s<<endl;
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

