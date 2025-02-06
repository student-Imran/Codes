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
   //int d=s.length();
   vector<char>v;
   for(int i=0;i<s.size();i++)
   {
   	if(s[i]==s[i+1])
   	{
   		i++;
   	}
   	else if(s[i]!=s[i+1])
   	{
          v.pb(s[i]);
   	}
   }
   sort(all(v));
   v.erase(unique(all(v)),v.end());
   for(int i=0;i<v.size();i++)
   {
   	cout<<v[i];
   }cout<<endl;
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

