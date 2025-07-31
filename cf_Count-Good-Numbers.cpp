#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
ll fun(ll x){

    ll ans=x;
 
    ans-=x/2LL;
    ans-=x/3LL;
    ans-=x/5LL;
    ans-=x/7LL;
   
    ans+=x/ (2LL*3);
    ans+=x/ (2LL*5);
    ans+=x/ (2LL*7);

    
    ans+=x/ (3LL*5);
    ans+=x/ (3LL*7);
    ans+=x/ (5LL*7);

    ans-=x/ (2LL*3*5);
    ans-=x/ (2LL*3*7);
    ans-=x/ (3LL*5*7);
    ans-=x/ (2LL*5*7);

    ans+=x/ (2LL*3*5*7);

    if(ans<0) ans=0;
    return ans;
    

}

void solve() {
  ll l, r;
  cin >> l >> r;

  cout<<fun(r)-fun(l-1)<<'\n';
  
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int tt = 1; 
  cin >> tt; 
  while (tt--) {
    solve();
  }
}