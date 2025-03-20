#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,k;cin>>n>>k;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  if(k==1){
     int maxi=*max_element(a,a+n);
     if(maxi==a[n-1]||maxi==a[0]){
          sort(a,a+n);
          cout<<maxi+a[n-2]<<'\n';
     }
     else{
        cout<<maxi+max(a[0],a[n-1])<<'\n';
     }
     
  }
  else{
    sort(a,a+n);
    long long ans=0;
    for(int i=n-1;i>=0;i--){
        ans+=a[i];
        k--;
        if(k==-1){
            break;
        }
    }cout<<ans<<'\n';
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

