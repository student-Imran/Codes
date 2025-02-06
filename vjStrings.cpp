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
   string s1,s2;
   cin>>s1>>s2;
   char c;
   c=s2[0];
   cout<<s1.size()<<" "<<s2.size()<<endl;
   cout<<s1+s2<<endl;
   s2[0]=s1[0];
   s1[0]=c;
   cout<<s1<<" "<<s2<<endl;

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

