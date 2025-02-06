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
   string s,t;
   cin>>s>>t;
   int d=s.length();
   int d1=t.length();
   //char a;
   int ct=count(t.begin(),t.end(),'a');
   //cout<<(ct)<<endl;
   if((d1==1)&&(ct==1))
   {
       cout<<"1"<<endl;
   }
   else if((d1>=1)&&(ct==0))
   {
       int ans=(d*(d+1))/2;
       cout<<(ans+1)<<endl;
   }
   else
   {
   	cout<<"-1"<<endl;
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

