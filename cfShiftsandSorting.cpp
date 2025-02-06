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
   ll x=s.size()-1;
   ll p=0;
   ll su=0;
   for(ll i=0;i<=x;i++)
   	{
   	if(s[i]=='1')
    {
    	p++;
    }
    else
    {
    	if(p>0)
    	{
    		su+=(p+1);
    	}
    }
   
   }cout<<su<<endl;
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

