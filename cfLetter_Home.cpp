#include<bits/stdc++.h>
using namespace std;  
void solve()
{
  int n,s;cin>>n>>s;
  int left=101;
  int right=0;
  int cl=0,cr=0;
  for(int i=0;i<n;i++){
  	int x;cin>>x;
  	if(x<s){
  		cl++;
  		left=min(left,x);
  	}else if(x>s){
  		cr++;
  		right=max(right,x);
  	}
  }
  //cout<<cl<<" "<<cr<<" "<<'\n';
  //cout<<left<<" "<<right<<'\n'; 
  if(left==101 and right==0){
  	cout<<0<<'\n';
  }
  else if(cl==0){
  	cout<<right-s<<'\n';
  }
  else if(cr==0){
  	cout<<s-left<<'\n';
  }
  else{
  	cout<<abs(right-left)+min((s-left),(right-s))<<'\n';
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

