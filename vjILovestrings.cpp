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
   int d=s1.size();
   int d1=s2.size();
   int i,j;
   if(d>d1)
   {
     for (i = 0; i <d1 ; i++)
   {
   	    cout<<s1[i]<<s2[i];
   }
   for( j=i;j<d-1;j++)
   {
   	cout<<s1[j];
   }
   cout<<s1[j]<<endl;
   }
  else if(d1>d)
   {
     for (i = 0; i <d ; i++)
   {
   	    cout<<s1[i]<<s2[i];
   }
   for( j=i;j<d1-1;j++)
   {
   	cout<<s2[j];
   }
   cout<<s2[j]<<endl;
   }
   else
   {
     for ( i = 0; i <d1-1 ; i++)
   {
   	    cout<<s1[i]<<s2[i];
   }
   cout<<s1[i]<<s2[i]<<endl;
   
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

