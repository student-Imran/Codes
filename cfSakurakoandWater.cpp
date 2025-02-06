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
   int n;
   cin>>n;
   int a[n][n];
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<n;j++)
    {
        cin>>a[i][j];
        
    }
   }
   int s=0;
   int ma=1000000;
   int y=n-1;
   for(int i=1;i<n;i++)
   {
   	int x=i;
   	int mini=0;
   	for(int j=0;j<y;j++)
   	{
       if(a[x][j]<0)
       {mini=min(ma,a[x][j]);
         ma=mini;
     }
      //cout<<mini<<endl;}

      x++;
      
   	}
   	ma=1000000;
   	//cout<<mini<<endl;
   	s+=abs(mini);
   	y--;
   }
   //cout<<s<<endl;
   int p=n;
   for(int j=0;j<n;j++)
   {
   	int x=j;
   	int mini=0;
   	for(int i=0;i<p;i++)
   	{
       if(a[i][x]<0)
       {mini=min(ma,a[i][x]);
         ma=mini;
     }
      //cout<<mini<<endl;}

      x++;
      
   	}
   	ma=1000000;
   	//cout<<mini<<endl;
   	s+=abs(mini);
   	p--;
   }
   cout<<s<<endl;
   

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

