#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
void solve()
{
    ll n,rk,ck,rd,cd;
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
            cout<<(n-rk)+(rk-rd)<<'\n';
        }
        else{
          cout<<rd<<'\n';
        }
    }
    else{
        if(rd>rk and cd>ck){
            if(rd>cd){
                cout<<rd<<'\n';
            }else{
                cout<<cd<<'\n';
            }
        }
        else if(rd>rk and cd<ck){
             // cout<<"ami2";
            if((n-ck)>cd){
                cout<<(n-ck)+(ck-cd)<<'\n';
            }
            else{
                cout<<cd+(rd-rk)<<'\n';
            }
        }
        else if(cd>ck and rd<rk){
             // cout<<"ami3";
            if((n-rk)>ck){
                cout<<(n-rk)+(rk-rd)<<'\n';
            }
            else{
                cout<<ck+(cd-ck)<<'\n';
            }
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

