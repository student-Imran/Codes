#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		multimap<int,pair<int,int>>m;
		for (int i = 0; i < n; ++i)
		{
			int l,r,real;
			cin>>l>>r>>real;
			m.insert({real,{l,r}});
		}
		for (auto x:m)
		{
			if(x.first>k and k>=(x.second.first) and k<=(x.second.second)){
                k=x.first;
			}
			
		}cout<<k<<'\n';
	}
}