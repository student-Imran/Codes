#include<bits/stdc++.h>
using namespace std;  
void solve()
{
   int n;cin>>n;
   string s;cin>>s;
   map<char,int>m;
   for(int i=0;i<n;i++){
      m[s[i]]++;
   }
   for(auto x:m){
   	if(x.second>1){
       m[s[0]]--;
       m[s[n-1]]--;
       if(m[x.first]==0){
       	m[s[0]]++;
       	m[s[n-1]]++;
       }
       else{
       	cout<<"YES\n";
       	return;
       }
   	}
   }cout<<"NO\n";
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

