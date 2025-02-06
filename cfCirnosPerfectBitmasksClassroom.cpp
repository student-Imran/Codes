#include<bits/stdc++.h>
using namespace std;


#define ff first
#define ss second
#define pb push_back
#define ll long long int
#define all(v) (v).begin(),(v).end()
#define set_bits __builtin_popcountll  
ll power(ll a)
{
	if((a&(a-1))==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void solution(ll n)
{
	if(n&1)
	{
       if(n==1)
       {
       	cout<<"3"<<endl;
       }
       else
       {
       	cout<<"1"<<endl;
       }  
	}
	else
	{
      if(power(n))
      {
      	cout<<n+1LL<<endl;
      }
      else
      {
      	cout<<(n&(~(n-1LL)))<<endl;
      }
	}
}

void solve()
{
   ll x;
   cin>>x;
   solution(x);
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

