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
   ll n;
   cin>>n;
   int ok=0;
   ll op=0;
   ll nn1=9;
   ll nn=99;
   ll nnn=999;
   ll nnnn=9999;
   ll nnnnn=99999;
   ll nnnnnn=99999;
   ll nnnnnnn=999999;
   ll nnnnnnnn=99999999;
   ll nnnnnnnnn=999999999;
   ll x,x1,x2,x3,x4,x5,x6,x7,x8;
   ll num=n;
   ll re;
   while(num)
   	{
   		re=num%10;
   		num/=10;
   		if(re==7)
   		{
   			ok=1;
   			break;
   		}
   	}
   	if(ok==1)
   	{
   		cout<<0<<'\n';
   	}
   	else
   	{
   for(int i=1;i>0;i++)
   {
   	x=n+nn1*i;
   	x1=n+nn*i;
   	x2=n+nnn*i;
   	x3=n+nnnn*i;
   	x4=n+nnnnn*i;
   	x5=n+nnnnnn*i;
   	x6=n+nnnnnnn*i;
   	x7=n+nnnnnnnn*i;
   	x8=n+nnnnnnnnn*i;
   	
   	
   	ll r;
   	
   	while(x)
   	{
   		r=x%10;
   		x/=10;
   		if(r==7)
   		{
   			ok=1;
   			break;
   		}
   	}
   	while(x1&&ok==0)
   	{
   		r=x1%10;
   		x1/=10;
   		if(r==7)
   		{
   			ok=1;
   			break;
   		}
   	}
   	while(x2&&ok==0)
   	{
   		r=x2%10;
   		x2/=10;
   		if(r==7)
   		{
   			ok=1;
   			break;
   		}
   	}
   	while(x3&&ok==0)
   	{
   		r=x3%10;
   		x3/=10;
   		if(r==7)
   		{
   			ok=1;
   			break;
   		}
   	}
   	while(x4&&ok==0)
   	{
   		r=x4%10;
   		x4/=10;
   		if(r==7)
   		{
   			ok=1;
   			break;
   		}
   	}
   	while(x5&&ok==0)
   	{
   		r=x5%10;
   		x5/=10;
   		if(r==7)
   		{
   			ok=1;
   			break;
   		}
   	}
   	while(x6&&ok==0)
   	{
   		r=x6%10;
   		x6/=10;
   		if(r==7)
   		{
   			ok=1;
   			break;
   		}
   	}
   	while(x7&&ok==0)
   	{
   		r=x7%10;
   		x7/=10;
   		if(r==7)
   		{
   			ok=1;
   			break;
   		}
   	}
   	while(x8&&ok==0)
   	{
   		r=x8%10;
   		x8/=10;
   		if(r==7)
   		{
   			ok=1;
   			break;
   		}
   	}
   	if(ok==1)
   	{
   		op=i;
   		break;
   	}
   	
   }
   cout<<op<<'\n';
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

