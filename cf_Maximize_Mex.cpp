#include<bits/stdc++.h>
using namespace std;
void solve()
{
   int n,x;cin>>n>>x;
   int a[n];
   map<int,int>m;
   for(int i=0;i<n;i++){
   	cin>>a[i];
   	if(a[i]<=min(x,n)){
   		m[a[i]%x]++;
   	}
   }
   int i;
   for(i=0;i<n;i++){
     if(m[i%x]==0){
     	cout<<i<<'\n';
     	return;
     }else{
     	m[i]--;
     }
   }cout<<i<<'\n';
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

