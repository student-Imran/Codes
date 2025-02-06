#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     //long long int n;
     while(t--)
     {
     	long long int n;
     	cin>>n;
     	//long long int a[n];
     	set<long long int>s;
     	for(int i=0;i<n;i++)
        {
        	long long int x;
        	cin>>x;
        	s.insert(x);
        	}
        	/*for(auto it=s.begin();it!=s.end();++it)
        	{
                  cout<<(*it)<<endl;
        	}*/
        }
        auto it=s.begin();
        auto z=it++;
        auto i=it++;
        for(auto ti=i;ti!=s.end();ti++)
        {
        	if((*ti)%(*it)==0||(*ti)%(*z)==0)
        	{
        		c++;
        	}
        	else
        	{
                if(prime(*ti))
        		{a[j]=(*ti);
        	    j++}
        	    else
        	    {
        	    	cout<<"No"<<endl;

        	    	int k=0;
        	    	k++;
        	    	break;
        	    }
        	}

        }
}