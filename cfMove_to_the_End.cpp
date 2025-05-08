#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve() {
  int  n; cin>>n;
  int a[n],b[n];
  for (int i=0;i<n;++i){
    cin>>a[i];
  }
  int maxi=0;
  for (int i=0;i<n;++i) {
    maxi=max(a[i],maxi);
    b[i]=maxi;
  }
  ll s=a[n-1];
  for (ll i=n-1;i>=0;--i) {
    if(i==n-1){
      cout<<b[n-1]<<" ";
    }
    else{
      cout<<s+b[i]<<" ";
      s+=a[i];
    }
    
  }
  cout<<'\n';
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t = 1; 
  cin >> t;
  while (t--)
  solve();
}