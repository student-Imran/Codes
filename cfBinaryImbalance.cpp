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
   string s;
   cin>>s;
   int c=0;
   for(int i=0;i<s.size()-1;i++)
   {
   	if(s[i]!=s[i+1])
   	{
   		c=1;
   		//cout<<s[i]<<" "<<s[i+1]<<endl;
   		break;
   	}
   }
   //cout<<c<<endl;
   if(c==1)
   {
   	cout<<"YES"<<endl;
   }
   else
   {
   	if(s[0]=='0')
   	{
   		cout<<"YES"<<endl;
   	}
   	else
   	{
   		cout<<"NO"<<endl;
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

