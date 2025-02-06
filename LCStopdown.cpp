#include<bits/stdc++.h>
using namespace std;


#define ff first
#define ss second
#define pb push_back
#define ll long long int
#define all(v) (v).begin(),(v).end()
#define set_bits __builtin_popcountll  
void princtLs(string x,string y,int l1,int l2)
{
    int t[l1+1][l2+1];
	for(int i=0;i<l1+1;i++)
	{
		for(int j=0;j<l2+1;j++)
		{
			if(i==0||j==0)
			{
				t[i][j]=0;
			}
		}
	}
	for(int i=1;i<l1+1;i++)
	{
		for(int j=1;j<l2+1;j++)
		{
			if(x[i-1]==y[j-1])
			{
				t[i][j]=1+t[i-1][j-1];
			}
			else
			{
				t[i][j]=max(t[i-1][j],t[i][j-1]);
			}
		}
	}
	int a,b;
	a=l1;
	b=l2;
	string s;
	while(a>0&&b>0)
	{
		if(x[a-1]==y[b-1])
		{
		  s.pb(x[a-1]);
		  a--;
		  b--;
		}
		else
		{
			if(t[a][b-1]>t[a-1][b])
			{
				b--;
			}
			else
			{
				a--;
			}
		}
	}
	reverse(s.begin(), s.end());
	cout<<s<<endl;
}

void solve()
{
   string s1,s2;
   cin>>s1>>s2;
   int d1=s1.size();
   int d2=s2.size();
   princtLs(s1,s2,d1,d2);
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

