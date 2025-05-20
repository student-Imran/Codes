#include<bits/stdc++.h>
using namespace std;  
void solve()
{
   int n;cin>>n;
   int a[n+1];
   for(int i=1;i<=n;i++){
   	cin>>a[i];
   	a[i]=abs(a[i]);
   }
   int x=(n+1)/2;
   int k=a[0];
   	sort(a,a+n);
   	int ind;
   	for(int i=1;i<=n;i++){
   		if(a[i]==k){
   			ind=i;
   			break;
   		}
   	}
   		if(ind<=x||ind==x){
   			cout<<"YES\n";
   		}else{
   			cout<<"NO\n";
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

