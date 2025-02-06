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
   int c=0,c1=0;
   for(int i=0;i<s.size();i++)
   {
   	if(c>0||c1>0)
   	{
        break;
   	}
   	if(s[i]=='0')
   	{
   		if((s[i+1]=='1')&&(s[i+2]=='0'))
   		{
   			c++;
   		}
   	}
   	else if(s[i]=='1')
   	{
   		if((s[i+1]=='0')&&(s[i+2]=='1'))
   		{
   			c1++;
   		}
   		
   }
}
    if(c>0||c1>0)
   	{
        cout<<"Good"<<endl;
   	}
   	else
   	{
   		cout<<"Bad"<<endl;
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

