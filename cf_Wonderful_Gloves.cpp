#include<bits/stdc++.h>
using namespace std;  
#define ll long long int
void solve()
{
   ll n,k;cin>>n>>k;
   ll le[n],re[n];
   for(int i=0;i<n;i++){
   	cin>>le[i];
   }
   for(int i=0;i<n;i++){
   	cin>>re[i];
   }
   ll s=0;
   for(int i=0;i<n;i++){
   	s+=max(le[i],re[i]);
   }
   s++;
   ll mini[k];
   for(int i=0;i<n;i++){
   	mini[i]=min(le[i],re[i]);
   }
   sort(mini,mini+n);
   reverse(mini,mini+n);
   for(int i=0;i<k-1;i++){
   	s+=mini[i];
   }cout<<s<<'\n';


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

