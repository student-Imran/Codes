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
   string s1,s2;
   cin>>s1>>s2;
   int c=0;
   for(int i=0;i<min(s1.size(), s2.size());i++)
   {
   	if(s1[i]==s2[i])
   	{
   		c++;
   	}
   	else
   	{
   		break;
   	}
   }
   if(c>0) 
   	{
   		int d=s1.size();
   		int d1=s2.size();
   		//cout<<d<<" "<<d1<<endl;
   		//cout<<c<<endl;
   	cout<<(d-c)+(d1-c)+c+1<<endl;
}
else
{
	cout<<(s1.size()+s2.size())<<endl;
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

