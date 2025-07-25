#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		int l_c_m=1;
		for (int i = 0; i < n-1; ++i)
		{
			if(a[i+1]%a[i]!=0){
				int gc=__gcd(a[i],a[i+1]);
				int x=a[i]/gc;
                l_c_m=lcm(l_c_m,x);
			}
		}
		cout<<l_c_m<<'\n';
	}
}