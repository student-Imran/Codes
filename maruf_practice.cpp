#include<bits/stdc++.h>
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n;cin>>n;
  set<pair<int,int>>s1;
  set<pair<int,int>>s2;
  long long int sum1=0,sum2=0;
  long long int m=0,c=0;
  for(int i=1;i<=n;i++)
  {
  	int x,y;cin>>x>>y;
  	if(x>0){
  		s1.insert({x,y});
  		sum1+=y;
  	}
  	else {
  		s2.insert({(-1)*x,y});
  		sum2+=y;
	  	}
		  
		}

		/*for(auto j:s1)
		{
			cout<<j.first<<' '<<j.second<<endl;
		}
		  for(auto j:s2)
		{
			cout<<j.first<<' '<<j.second<<endl;
		}*/

    int d1=s1.size(),d2=s2.size();
  	if(d1==d2 || abs(d1-d2)==1)
  	{
  		cout<<sum1+sum2<<endl;
  		return 0;
  	}
  	else
  	{
  		auto x1=s1.begin(),x2=s2.begin();
  		while(m!=(sum1+sum2))
  		{
  			if((x1==s1.end() && c==1) ||(x2==s2.end() && c==2))
  			{
  				cout<<m<<endl;
  				return 0;
  			}
  		if((*x1).first>(*x2).first)
  		{
      c=2;
      m+=(*x1).second;
      x1++;
  		}
  		else
  		{
  		c=1;
      m+=(*x2).second;
      x2++;
  		}
  	}
  	}
  	cout<<m<<endl;
  	return 0;
  	
  }
