#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
void solve()
{
    int n;cin>>n;
    int a[n];
    int ans=0;
    int neg=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==0){
            ans++;
        }
        else if(a[i]<0){
            neg++;
        }
    }
    if(neg%2==0){
        cout<<ans<<'\n';
    }
    else{
        cout<<ans+2<<'\n';
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

