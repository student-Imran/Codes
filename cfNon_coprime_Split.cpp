#include<bits/stdc++.h>
using namespace std;


#define ff first
#define ss second
#define pb push_back
#define ll long long int
#define all(v) (v).begin(),(v).end()
#define set_bits __builtin_popcountll  
const int N=1e7;
bitset<N>f;
void sieve()
{
   f[1]=false;
   for(int i=2;i<N;i++)
   {
   	f[i]=true;
   }
   for(int i=2;i*i<N;i++)
   {
   	if(f[i])
   	{
   	for(int j=i+i;j<N;j+=i)
   	{
   		f[j]=false;
   	}
   }
   }
   
 }
void solve()
{
   int l,r;
   cin>>l>>r;
   int ok=0;
   if(r<=3)
   {
   	cout<<-1<<'\n';
   }
   else if(l!=r)
   {
   	if(r%2==0)
   	{
  
   			cout<<2<<" "<<r-2<<'\n';
   		}
   	else
   	{
   		r--;
   		
   		if(r-2!=0)
   		{
   			cout<<2<<" "<<r-2<<'\n';
   		}
   		else
   		{
   			cout<<-1<<'\n';
   		}
   	}
   }
   else if(l==r)
   {
   	if(l%2==0)
   	{
   		if(l-2!=0&&l>3)
   		{
          cout<<l-2<<" "<<2<<'\n';
   		}
   		else
   		{
   			cout<<-1<<'\n';
   		}
   		
   	}
   	else 
   	{
       if(f[l])
       {
       	cout<<-1<<'\n';
       }
       else
       {
       	for(int i=2;i*i<=l;i++)
       	{
       		if(l%i==0)
       		{
       			cout<<i<<" "<<l-i<<'\n';
       			break;
       		}
       	}
       }
   	}
   	
   	}
   
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    sieve();
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;

}

