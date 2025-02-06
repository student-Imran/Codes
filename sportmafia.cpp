#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,k,y,x;
	cin>>n>>k;
	x=(n*(n+1LL))/2LL;
	if(x==k)
	{
		cout<<"0"<<endl;

	}
    else if(k==0)
    {
    	for(long long int i=1;i<=n;i++)
		{
            y=(i*(i+1LL))/2LL;
            if((y+i)==n)
            {
            	cout<<y<<endl;
            	break;
            }
        }
    }

	else
	{
		for(long long int i=1;i<=n;i++)
		{
            y=(i*(i+1LL))/2LL;
            if((y>k)&&(n-i)==(y-k))
        {
        	cout<<y-k<<endl;
        	break;

        }
		}
	}

}