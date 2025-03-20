#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,k;cin>>n>>k;
  if(n%2==1){
    if(k%2==1){
        if((n-k)%(k-1)==0){
            cout<<1+(n-k)/(k-1)<<'\n';
        }
        else{
            cout<<2+(n-k)/(k-1)<<'\n';
        }
    }
    else{
        if((n-k-1)%k==0){
            cout<<1+(n-k-1)/k<<'\n';
        }
        else{
            cout<<2+(n-k-1)/k<<'\n';
        }

    }
  }
  else{
    if(k%2==1){
        if(n%(k-1)==0){
            cout<<n/(k-1)<<'\n';
        }
        else{
            cout<<n/(k-1)+1<<'\n';
        }
    }
    else{
        if(n%k==0){
            cout<<n/k<<'\n';
        }
        else{
            cout<<(n/k)+1<<'\n';
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

