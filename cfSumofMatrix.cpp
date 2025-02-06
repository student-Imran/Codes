#include<bits/stdc++.h>
using namespace std;


#define ff first
#define ss second
#define pb push_back
#define ll long long int
#define all(v) (v).begin(),(v).end()
#define set_bits __builtin_popcountll  
void mat_sum(int x[][110],int y[][110],int k,int l,int p)
{
    if(p==k)
    {
      //cout<<p<<endl;
      return;
    }

    else
      {
   
      for(int j=0;j<l;j++)
      {
         cout<<x[p][j]+y[p][j]<<" ";
      }
      cout<<endl;
    
 }
    return mat_sum(x,y,k,l,p+1);
}


void solve()
{
   int n,m;
   cin>>n>>m;
   int a[110][110];
   int b[110][110];
   for(int i=0;i<n;i++)
   {
   	for(int j=0;j<m;j++)
   	{
   		cin>>a[i][j];
   	}
   }
   for(int i=0;i<n;i++)
   {
   	for(int j=0;j<m;j++)
   	{
   		cin>>b[i][j];
   	}
   }
   mat_sum(a,b,n,m,0);
   
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

