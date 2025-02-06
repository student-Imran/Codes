#include<bits/stdc++.h>
using namespace std;


#define ff first
#define ss second
#define pb push_back
#define ll long long int
#define all(v) (v).begin(),(v).end()
#define set_bits __builtin_popcountll  

int isPerfectSquare(int x)
{
    
    if (x >= 0) {

         int sr = sqrt(x);
        return (sr * sr == x);
    }
    
    return false;
}


void solve()
{
   int n,sr;
   cin>>n;
   string s;
   cin>>s;
  
   
   int ct=count(s.begin(),s.end(),'0');
   //cout<<ct<<endl;
   int l=sqrt(ct);
   if(isPerfectSquare(ct))
   {
      if((l+2)*(l+2)==n)
      {
      	cout<<"YES"<<endl;
      }
      else
      {
       cout<<"NO"<<endl;
      }
   }
   else
   {
   	cout<<"NO"<<endl;
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

