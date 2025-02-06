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
   int n,k;
   cin>>k>>n;
   int x=1,c=0,a,c1,j,b;
   for(int i=1;i<k;i++)
   {
        x=x+c;
        if(x<=n)
        	{
                b=x;
        		cout<<x<<" ";
                c++;
            }
        else
        	{
        	 a=b;
        	 c1=1;
        	 j=i;
        	break;
        	//cout<<b<<" ";

   }
}
if(c1==1)
{
  for(int ki=j;ki<k;ki++)
  {
  	cout<<a<<" ";
  }
  cout<<a<<endl;
}
else
{
	if(x+c>n)
	{
     cout<<b<<endl;
	}
	else
	{
		cout<<x+c<<endl;
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

