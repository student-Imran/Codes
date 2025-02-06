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
   int n,m;
   cin>>n>>m;
   int a[n];
   int b,c;
   b=c=0;
   for (int i = 0; i < n; ++i)
   {
   	
    cin>>a[i];
    //cout<<a[i]<<" ";
    b+=(a[i]/2);
    c+=(a[i]%2);

   }
   //cout<<b<<" "<<c<<endl;
   int r=m-b;
   int x;
   if(r>=c)
   {
   	x=c;
   }
   else
   {
    x=(r*2-c);
   }
    
   //cout<<r<<" "<<x<<endl;
   cout<<(b*2)+x<<endl;
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

