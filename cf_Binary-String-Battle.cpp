#include<bits/stdc++.h>
using namespace std; 
void solve() {
    
    int n,k;cin>>n>>k;
    string s;cin>>s;
    int x=(n+1)/2;
    int cnt=count(s.begin(),s.end(),'1');
    if(n%2==0){
        if(cnt<=k or k>x){
            cout<<"Alice\n";
        }
        else{
            cout<<"Bob\n";
        }
    }
    else{
    if(cnt<=k or k>=x){
        cout<<"Alice\n";
    } 
    else{
        cout<<"Bob\n";
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

