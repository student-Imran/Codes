#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
void solve()
{
    int n;cin>>n;
    string s;cin>>s;
    int zero =0;
    map<int,int>ma;
    int i=0;
    for(i=0;i<n;i++){
        if(s[i]=='0'){
            zero++;
        }
        else{
            if(zero==1){
                cout<<"NO\n";
                return;
            }
            else{
                ma[i-zero]=zero;
                zero = 0;
            }
        }
    }
    if(zero==1){
        cout<<"NO\n";
        return;
    }
    ma[i-zero] = zero;

    cout<<"YES\n";
    int num=1;
    for(int j=0;j<n;j++){
        // cout<<j<<'\n';
        if(ma[j]>0){
            num = num + ma[j] ;
            int prnt = ma[j];
            int numZero = num-1;
            while(prnt--){
                cout<<numZero<<" ";
                if(numZero==1){
                    break;
                }
                numZero--;
            }
            j=j+ma[j]-1;
            
            // cout<<j<<'\n';
        }
        else{
            cout<<num<<" ";
            num++;
        }

    }
    cout<<'\n';

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

