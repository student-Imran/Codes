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
   string s;
   cin>>s;
   map<char,ll>m;
    map<char,ll>ma;

   ll c=n,i,j;
   int c2=1;
   for( i=0;i<n;i++)
   {
       char o=s[i];
       int p;
       m[o]++;
       //cout<<m[o]<<endl;
      if(m[o]==2)
      {
       //m[o]--;
        j=i;
         c2=1;
       break;
      }

   }
    
 
  for(j=i;j<n;j++)
   {
       char o=s[j];
       int p;
       ma[o]++;
       //cout<<m[o]<<endl;
      if(ma[o]>1)
      {
       //cout<<m[o]<<endl;
       c--;
      }

   }
   
   
    /*for (auto x : m) 
    cout << x.first << " " <<  
            x.second << endl;*/
   //cout<<j<<endl;
  
   
   cout<<c<<endl;
   /*for (auto x : m) 
    cout << x.first << " " <<  
            x.second << endl; */
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	ll t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;

}

