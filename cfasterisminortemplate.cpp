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
   int d=s1.length();
   int d1=s2.length();
   if(s1==s2)
   {
   	cout<<"YES"<<endl;
   	cout<<s1<<endl;
   }
   else if(s1[0]==s2[0])
   {
      cout<<"YES"<<endl;
      cout<<s1[0]<<"*"<<endl;
   }
   else if(s1[d-1]==s2[d1-1])
   {
   	cout<<"YES"<<endl;
   	cout<<"*"<<s1[d-1]<<endl;
   }
   else
   {
   	int c=0;
   	for(int i=0;i<d;i++)
   	{
   		for(int j=0;j<d1;j++)
   		{
   		 if(s1[i]==s2[j])
   		{
   			if(s1[i+1]==s2[j+1])
   			{
   				cout<<"YES"<<endl;
   				cout<<"*"<<s1[i]<<s1[i+1]<<"*"<<endl;
   				c++;
   				break;
   			}
   		}
   	}
   	if(c==1)
   	{
   		break;
   	}
   }
   	if(c==0)
   	{
       cout<<"NO"<<endl;
   	}
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

