#include<bits/stdc++.h>
using namespace std;
void solve()
{
   int n,k;cin>>n>>k;
   int a[n];
   for(int i=0;i<n;i++){
   	cin>>a[i];
   }sort(a,a+n);
   int ans=0;
   int c=0;
   for(int i=0;i<n-1;i++){
   	int x=abs(a[i]-a[i+1]);
   	if(x<=k){
   		c++;
   	}else{
   		ans=max(ans,c);
   		c=0;
   	}
   }
   ans=max(ans,c);
   if(ans==0){
   	cout<<n-1<<'\n';
   }else{
   	cout<<n-ans-1<<'\n';
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

