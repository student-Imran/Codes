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
   string s;
   cin>>s;
  // cout<<s<<endl;
   int ct;
   ct=count(s.begin(),s.end(),'0');
   int l;
   l=s.length();
   int ct1;
   ct1=l-ct;
   //cout<<l<<" "<<ct<<" "<<ct1<<endl;
  // vector<char>v;
   if(ct==ct1)
   {
   	cout<<"0"<<endl;
   }
   else{for(int i=0;i<l;i++)
   {
   	
   	if(s[i]=='0')
   	{
   		if(ct1==0)
   		{
   			cout<<(l-i)<<endl;
   			break;
   		}
   		else
   			{
   				ct1--;
   			}
   	}
   	else if(s[i]=='1')
   	{
   		if(ct==0)
   		{
   			cout<<(l-i)<<endl;
   			break;
   		}
   		else
   			{
   				ct--;
   			}
   	}
   }}

   
   //cout<<ct<<" "<<l<<" "<<ct1<<endl;
   
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

