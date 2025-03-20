#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
   ll n,k,b,s;cin>>n>>k>>b>>s;
   ll x=k*b;
   if(x>s){
   	cout<<-1<<'\n';
   }
   ll l_s=s-x;
   if(l_s<=(k-1)){
   	for(int i=0;i<n-1;i++){
   		cout<<
   	}
   }
   ll dite_parbo=(k-1)*(n-1);
   if(l_s<0||l_s>dite_parbo){
   	cout<<-1<<'\n';
   }   
   else{

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

