#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
void solve()
{
    int n,rk,ck,rd,cd;
    cin>>n>>rk>>ck>>rd>>cd;
     if(rk==0 and ck==0){
        cout<<max(rd,cd)<<'\n';
    }
    else if(rk==rd){
        if(cd>ck){
            cout<<cd<<'\n';
        }
        else{
          cout<<(n-cd)<<'\n';
        }
    }
    else if(cd==ck){
        // cout<<1?<<' ';
        if(rk>rd){
            cout<<(n-rd)<<'\n';
        }
        else{
          cout<<rd<<'\n';
        }
    }
    else{
        int ans=-1;
        if(rd>rk){
            ans = max(ans,rd);
        }
        if(rk>rd){
            ans = max(ans,n-rd);
        }
        if(cd>ck){
            ans = max(ans,cd);
        }
        if(ck>cd){
            ans = max(ans,n-cd);
        }
        cout<<ans<<'\n';
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

