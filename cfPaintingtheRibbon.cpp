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
   int n,m,k;
   cin>>n>>m>>k;
   int rem;
   int i,a=1;
   for( i=1;i>0;i++)
   {
   	int x=i*m+1;
   	
   	 if(x>n)
   	{
        i--;
        break;
   	}
      else
      {
         a=x;
      }
   }
   int c=0;
   for(int j=a+1;j<=n;j++)
   {
    c++;
   }
  int b=i*(m-1);
   b=b+c;
   if(k>=b)
   {
   	cout<<"NO"<<endl;
   }
   else
   {
   	cout<<"YES"<<endl;
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

