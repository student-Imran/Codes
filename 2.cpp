#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,k;cin>>n>>k;
  int a[n];
  long long int s=0;
  for(int i=0;i<n;i++){
    cin>>a[i];
    s+=a[i];
  }
  sort(a,a+n);
  int x=(a[n-1]-1)-a[0];
  int y=a[n-2]-a[0];
  //cout<<x<<'\n';
  if(x>k){
    cout<<"Jerry\n";
  }else{
     if(y>k){
      cout<<"Jerry\n";
     }
     else if(s%2==0){
      cout<<"Jerry\n";
     }else{
      cout<<"Tom\n";
     }
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

