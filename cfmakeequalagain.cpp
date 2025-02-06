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
   int c=1,c1=0;
   int a[n];
   for(int i=0;i<n;i++)
   {
   	cin>>a[i];
   }
    for(int i=0;i<n;i++)
   {
      if(i>0)
      {
         if(a[i]==a[i-1])
         {
            c++;
         }
         else
         {
            break;
         }
      }

   }
   //cout<<c<<endl;
   if(c==n)
   {
      cout<<"0"<<endl;
   }
   else
      {
         for(int i=n-1;i>=0;i--)
   {
       if(a[i]==a[i-1])
       {
           c1++;
       }
       else
       {
         break;
       }
   }
   //cout<<c1<<endl;
   if(a[0]==a[n-1])
   {
      c1++;
      //cout<<c1<<endl;
      cout<<n-(c+c1)<<endl;
   }
   else if(a[0]!=a[n-1])
   {
      c1++;
      int l;
      l=max(c,c1);
      cout<<n-l<<endl;
   }




}}
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

