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
   int a[n],b[n];
   map<int,int>m;
   int ma=-1;
   for(int i=0;i<n;i++)
   {
   	cin>>a[i];
   }
   for (int i = 0; i < n-1; ++i)
   {
   
      if(a[i]==a[i+1])
      {
         m[a[i]]++;
         c=1;
      }
      else if(c>0)
      {
         m[a[i]]++;
         c=0;
      if(m[a[i]]>ma)
      {
         ma=m[a[i]];
      }
      }
   }
   for (int i = 0; i < n; ++i)
   {
      if(b[i]==b[i+1])
      {
         m[b[i]]++;
         c2=1;
      }
      else if(c2>0)
      {
      if(m[b[i]]>ma)
      {
         ma=m[b[i]];

         c2=0;
      }
      else
      {
         c2=0;
      }
      }
   }





   for (int i = 0; i < n; ++i)
   {
      m[b[i]]++;
      if(b[i]==b[i+1])
      {
         if(m[b[i]]>ma)
      {
         ma=m[b[i]];
      }
      }
      else
      {
         if(m[b[i]]>0)
         {
            continue;
         }

      }
   }


   for(int i=0;i<n;i++)
   {
   	cin>>b[i];
   	m[b[i]]++;
   	
   }
   cout<<ma<<endl;
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

