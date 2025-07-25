#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		int a[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		int flag=0;
		int ans=0;
		for (int i = 0; i < n; i++)
		{
			if(flag==0 and a[i]==0){
				int ok=0;
				for (int j = i; j < n; ++j)
				{
					if(a[j]==0){
						ok++;
						// cout<<"ok "<<ok<<'\n';
						if(ok==k){
							flag=1;
							ans++;
							i=j;
							break;
						}
					}
					else
					{
						i=j;
						break;
					}
				}
			}
			else if(flag==1){
				flag=0;
			}
			
			
		}cout<<ans<<'\n';
	}
}