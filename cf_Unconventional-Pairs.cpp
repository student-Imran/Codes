#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
void solve()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int ans = -1;
    for(int i=0;i<n;i=i+2){
        int dif = abs(a[i]-a[i+1]);
        ans = max(ans,dif);
    }cout<<ans<<'\n';
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

