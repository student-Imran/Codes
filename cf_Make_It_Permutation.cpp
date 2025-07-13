#include<bits/stdc++.h>
using namespace std;  
void solve()
{
  int n;cin>>n;
  int step=2*n-3;
  cout<<step<<'\n';
  int r=2,le=1,ri=2;
  for(int i=0;i<n-1;i++){
     cout<<r++<<" "<<le<<" "<<ri++<<'\n';
  }
  step=step-(n-1);
  r=1,ri=n,le=2;
  for(int i=0;i<step;i++){
      cout<<r++<<" "<<le++<<" "<<ri<<'\n';
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

