#include<bits/stdc++.h>
using namespace std;


#define ff first
#define ss second
#define pb push_back
#define ll long long int
#define all(v) (v).begin(),(v).end()
#define set_bits __builtin_popcountll  

int lcs(string x,string y,int l1,int l2)
{
	int an=0;
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
				an=max(an,t[i][j]);
			}
			else
			{
				t[i][j]=0;
			}

		}
	}
	return an;
			
}

void solve()
{
   string s1,s2;
   cin>>s1>>s2;
   int d1=s1.size();
   int d2=s2.size();

   int x=lcs(s1,s2,d1,d2);
   cout<<x<<endl;
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

