#include<bits/stdc++.h>
using namespace std;


#define ff first
#define ss second
#define pb push_back
#define ll long long int
#define all(v) (v).begin(),(v).end()
#define set_bits __builtin_popcountll 
int c=0; 
int vowel(string a,int i)
{
	if(i==a.length())
	{
		return c;
	}
	else
	{
		
		
		if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
		{
           c++;
		}
		return vowel(a,i+1);
		//cout<<c<<endl;
		
		//cout<<c<<endl;

	}
}

void solve()
{
   string s;
   //cin.ignore();
   getline(cin,s);
   cout<<vowel(s,0)<<endl;

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

