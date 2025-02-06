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
   ll a[n];
   ll b[m];
   for(int i=0;i<n;i++)
   {
   	cin>>a[i];
   }
   for(int j=0;j<m;j++)
   {
   	cin>>b[j];
   }
   int i,k=0,c=0;
   for(int j=0;j<m;j++)
   {
   	while(k!=n)
      {
         if(b[j]==a[k])
         {
            c++;
            k++;
            break;
         }
         else
         {
            k++;
         }
      }
      

   }
   if(c==m)
   {
      
      cout<<"YES"<<endl;
   }
   else
   {
      //cout<<k<<endl;
      cout<<"NO"<<endl;
   }
   
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	/*int t;
	cin>>t;
	while(t--)
	{*/
		solve();
	//}
	return 0;

}

