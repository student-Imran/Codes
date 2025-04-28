#include<bits/stdc++.h>
using namespace std; 
void solve()
{
    int n;cin>>n;
    int a[n+1][n+1];
    int b[2*n+1];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
          b[i+j]=a[i][j];

        }
    }
    int x=2*n;
    int su=x*(x+1)/2;
    //cout<<su<<'\n';
    b[1]=0;
    int first=su-accumulate(b+1,b+(2*n)+1,0);
    //cout<<first<<'\n';
    b[1]=first;
    for(int i=1;i<=2*n;i++){
        cout<<b[i]<<" ";
    }cout<<'\n';
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

