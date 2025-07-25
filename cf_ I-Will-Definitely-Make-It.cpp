#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--){
	int n,k;cin>>n>>k;
	int a[n],b[n];
	int maxi=-1;
	for (int i = 0; i < n; ++i)
	{
	  cin>>a[i];
	  b[i]=a[i];
	  maxi=max(maxi,a[i]);

	}
	sort(a,a+n);
	int pos=k;
	int water_level=0;
	for (int i = 0; i < n; ++i)
	{
		if(b[pos-1]==a[i]){
			pos=i;
			break;
		}
	}
	int pos_val;
	pos_val=a[pos];
	for (int i = pos; i < n-1; ++i)
	{   if(a[i]!=a[i+1]){
		int need_time=abs(a[i]-a[i+1]);
		water_level+=need_time;
		if(water_level>pos_val){
			
			break;
		}
		else{
			pos_val=a[i+1];
			if(pos_val==maxi)
			{
				break;
			}
		}
   }

	}
	if(pos_val==a[n-1]){
		cout<<"YES\n";
	}
	else{
		cout<<"NO\n";
	}

}
}