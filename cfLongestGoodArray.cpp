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
   ll l,r;
   cin>>l>>r;
   ll x=l;
   ll c1=1;
   for(int i=1;i<r;i++)
   {
      x+=i;
      if(x>r)
      {
      	
      	break;
      }
      else
      	{
      		c1++;
      	}
   }
   cout<<c1<<endl;

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

