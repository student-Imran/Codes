#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve() {
   int n;cin>>n;
   ll a[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   sort(a,a+n);
   ll x;
   int count=0;
   int ok=0;
   ll gc=a[1];
   for(int i=1;i<n;i++){
    if(a[i]==a[0]){
        ok=1;
        break;
    }
    if(a[i]%a[0]==0){
        count++;
        if(count==1){
            x=a[i];
        }
        else{
            x=__gcd(x,a[i]);
            if(x==a[0]){
                ok=1;
                break;
            }
        }
    }
   }if(ok==1){
    cout<<"yes"<<'\n';
   }
   else{
    cout<<"no"<<'\n';
   }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
