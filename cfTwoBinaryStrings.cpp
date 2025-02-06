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
	if((s1[1]=='1')&&(s2[1]=='1'))
	{
		cout<<"YES"<<endl;
	}
	else if((s1[s1.size()-2]=='0')&&(s2[s2.size()-2]=='0'))
	{
		cout<<"YES"<<endl;
	}
	else{
        int c2=0,c1=0,c=0;
	for(int i=1;i<s1.size()-1;i++)
	{
		if((s1[i]=='1')&&(s2[i]=='1'))
		{
            c=i;
            c--;
            c1=1;
           break;
		}
	}
for(int i=1;i<s1.size()-1;i++)
	{
		if((s1[i]=='0')&&(s2[i]=='0'))
		{
            if(i==c)
            {c2=1;
           break;}
           else
           {
           	continue;
           }
		}
	}
	if((c1==1)&&(c2==1))
	{
		cout<<"YES"<<endl;
	}
	else
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

