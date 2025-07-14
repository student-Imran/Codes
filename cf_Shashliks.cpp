#include<bits/stdc++.h>
using namespace std;  
void solve()
{
  int k,a,b,x,y;cin>>k>>a>>b>>x>>y;
  int ans=0;
  if(k<a and k<b){
	cout<<ans<<'\n';
	return;
  }
  else if(x<y){
	  
       if(a<=k){
         int sub1=k-a;
	  ans+=(sub1/x+1);
	  k=k-(ans*x);
	   }
	  if(b<=k){
	   int sub2=k-b;
	   ans+=(sub2/y+1);
	  }
  }
  else if(x==y){
	int mini=min(a,b);
	ans+=(k-mini)/x+1;
	
  }
  else if(y<x){
	   if(b<=k){
     int sub1=k-b;
	  ans+=(sub1/y+1);
	   k=k-(ans*y);
	   }
	  
	  if(a<=k){
	   int sub2=k-a;
	   ans+=(sub2/x+1);
	  }
	  
  }
  cout<<ans<<'\n';
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

