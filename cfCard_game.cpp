#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;cin>>n;
    string s;cin>>s;
    if(s[0]=='A' and s[n-1]=='A'){
        cout<<"Alice"<<'\n';
    }
    else if(s[0]=='B' and s[n-1]=='B'){
        cout<<"Bob"<<'\n';
    }
    else if(s[0]=='A'){
        int c=count(s.begin(),s.end(),'B');
        if(c==1){
            cout<<"Alice\n";
        }
        else{
            cout<<"Bob\n";
        }
    }
    else if(s[0]=='B'){

        if(s[n-2]=='B'){
            cout<<"Bob\n";
        }
        else{
            cout<<"Alice\n";
        }
    }
  
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t = 1; 
  cin >> t;
  while (t--)
  solve();
}