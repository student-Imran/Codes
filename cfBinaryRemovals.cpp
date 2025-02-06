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
   int x,y,one=0,zero=0;
   for(int i=s.size()-1;i>=0;i--)
   {
   	if((s[i]=='1')&&(s[i-1]=='1')&&(c==0))
   	{
   		
   		one=1;
   		
   		x=i;
   		c++;
   	}
   	else if((s[i]=='0')&&(s[i-1]=='0')&&(c1==0))
   	{
   		
   		zero=1;
   		
   		y=i;
   		c1++;
   	}
   }
   //cout<<one<<" "<<zero<<endl;
   if((one==1)&&(zero==1))
   {
   	if(x>y)
   	{
   		cout<<"YES"<<endl;
   	}
   	else
   	{
   		cout<<"NO"<<endl;
   	}
   }
   else
   {
   	cout<<"YES"<<endl;
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

