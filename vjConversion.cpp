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
   for(int i=0;i<s.size();i++)
   {
   	if(s[i]==',')
   	{
   		s[i]=' ';
   	}
   	else if((s[i]<=92)&&(s[i]>=65))
   	{
   		s[i]=s[i]+32;
   	}
   	else
   	{
   		s[i]=s[i]-32;
   	}
   }cout<<s<<endl;
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

