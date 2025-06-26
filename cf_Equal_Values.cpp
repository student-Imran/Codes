#include<bits/stdc++.h>
using namespace std;
void solve()
{
   long long int n;cin>>n;
   long long int a[n+1];
   for(int i=1;i<=n;i++){
   	cin>>a[i];
   }
   long long int ans=1e17+10;
   long long int result=0;
   long long int milse=1;
   for(int i=1;i<n;i++){
   	if(a[i]!=a[i+1]){
   	   result=n-milse;
   	   result=a[i]*result;
   	   milse=1;
       ans=min(ans,result);
   	}
   	else{
      milse++;
   	}
   }
   if(milse>1){
   	result=n-milse;
   	result=result*(a[n]);
   	cout<<min(ans,result)<<'\n';
   }
   else{
   	result=a[n]*(n-1);
   	cout<<min(ans,result)<<'\n';
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

