#include <bits/stdc++.h>
using namespace std;

void solve() {
    string n;cin>>n;
    int x;
    int z=0;
    for(int i=0;i<n.size();i++){
        if(n[i]=='0'){
            z++;
            x=i;
        }
    }
    for(int j=n.size()-1;j>=0;j--){
        if(n[j]=='0'){
            z--;
        }
        else{
            break;
        }
    }
    if(z==0){
        cout<<n.size()-1<<'\n';
    }else{
        cout<<n.size()-(z+1)<<'\n';
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
