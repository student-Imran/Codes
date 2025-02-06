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
   int c=0,c1=0,c2=0,c3=0,c4=0,c5=0;
   for(int i=0;i<s.size();i++)
   {
   	if(s[i]=='h'&&c==0)
   	{
   		c1=1;
   	}
   	else if(s[i]=='e'&&c1==1)
   	{
   		c2=1;
   	}
   	else if(s[i]=='l'&&c3==1)
   	{
   		c4=1;
   	}
   	else if(s[i]=='l'&&c2==1)
   	{
   		c3=1;
   	}
   	
   	else if(s[i]=='o'&&c4==1)
   	{
      c5=1;
   	}
   }
   //cout<<c1<<" "<<c2<<" "<<c3<<" "<<c4<<" "<<c5<<endl;
   if(c5==1)
   {
   	cout<<"YES"<<endl;
   }
   else
   {
   	cout<<"NO"<<endl;
   }
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	/*int t;
	cin>>t;
	while(t--)
	*/
	{
		solve();
	}
	
	return 0;

}

