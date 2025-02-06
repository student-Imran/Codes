#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
	int n,k;
	int c=0;
	cin>>n>>k;
	if(n==k)
	{
		cout<<"1"<<endl;
	}
	else if(n==1)
	{
		cout<<"0"<<endl;
	}
	else
	{
        int x=n;  
          while(x>1)
          {
          	x=x-(k-1);
          	c++;
          }
          cout<<c<<endl;
	}
	
}
}