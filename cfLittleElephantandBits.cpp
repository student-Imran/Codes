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
   int c=0;
   int d=s.size();
   for(int i=0;i<d-1;i++)
   {
   	if(s[i]=='0'&&c==0)
   	{
   		c=1;
   	}
   	else
   	{
   		cout<<s[i];
   	}
   }
   if(s[d-1]=='1'&&c==0)
   {
   	cout<<endl;
   }
   else if(s[d-1]=='0'&&c==0)
   {
   	cout<<endl;
   }
   else if(c==1)
   {
   	cout<<s[d-1]<<endl;
   }


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

