#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  int a,b,c;
  cin>>a>>b>>c;
  int arr[11]={0,1,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000};
  int i=1*arr[a];
  int j=1*arr[b];
  int gc=1*arr[c];
  int ok=0;
  if(i==0)
  {
  	i++;
  }
  if(j==0)
  {
  	j++;
  }
  if(gc==0)
  {
  	gc=2;
  }
  for(int x=i;x<1*arr[a+1];x++){
  	if(x%)
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

