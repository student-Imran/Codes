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
   int c=0,m=0;
   for(int i=0;i<s.size()-1;i++)
   {
   	if(s[i]==s[i+1])
   	{
   		c++;
   	}
   	else
   	{
   		if(c>=m)
   		{
   			m=c;
   			c=0;
   		}
   		else
   		{
   			c=0;
   		}
   	}
   }
  if(c>=m)
   		{
   			m=c;
   		}
   		

   cout<<m+2<<endl;
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

