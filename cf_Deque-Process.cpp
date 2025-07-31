#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve() {
    int n;cin>>n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    int r=n-1;
    int i=0;
    int count=0;
    while(i<=r)
    {
        if(i==r){
            cout<<"L";
            cout<<'\n';
            return;
        }
        if(count%2==0){
            int d=min(a[i],a[r]);
            if(d==a[i]){
                cout<<"L";
                i++;
            }
            else{
                cout<<"R";
                r--;
            }
        }
        else{
            int d=max(a[i],a[r]);
            if (d==a[i])
            {
                cout<<"L";
                i++;
            }
            else{
                cout<<"R";
                r--;
            }
        }
        count++;

 
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}