#include<bits/stdc++.h>
using namespace std;
void solve()
{
   int n,q;cin>>n>>q;
   vector<int>h;
   int qu[q];
   vector<int>ans;
   int k;
   for (int i = 0; i < n; ++i)
   {
   	int x;
   	cin>>x;
   	h.push_back(x);
   	if(i==0){
   		ans.push_back(h[i]);
   	}
   	else{
   		k=max(ans[i-1],h[i]);
   		ans.push_back(k);
   	}
   }
   long long int pre[n];
   pre[0]=h[0];
   for(int i=1;i<n;i++){
   	pre[i]=pre[i-1]+h[i];
   }
   for(int i=0;i<q;i++){
   	cin>>qu[i];
   }
   for(int i=0;i<q;i++){
   	//cout<<"sea "<<qu[i]<<'\n';
   	auto it=upper_bound(ans.begin(),ans.end(),qu[i]);
   	int j=(it-ans.begin()-1);
   	if(j<0){
   		cout<<0<<" ";
   	}
   	else{
   		cout<<pre[j]<<" ";
   	}
   	}cout<<'\n';
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

