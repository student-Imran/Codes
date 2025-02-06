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
   //cin.ignore();
   getline(cin,s);
   for(int i=0;i<s.size();i++)
   {
   	if(s[i]==92)
   	{
   		break;
   	}
   	else
   	{
   		cout<<s[i];
   	}
   }
   //cout<<s<<endl;
   cout<<endl;

}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	//int t;
	//cin>>t;
	//while(t--)
	//{
		solve();
	//}
	return 0;

}

