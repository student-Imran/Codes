#include<bits/stdc++.h>
using namespace std; 
void solve()
{
    int n,m;cin>>n>>m;
    int a[n][m];
    int ans=0;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<m;j++){
            char c;cin>>c;
            int x=c-'0';
            a[i][j]=x;
            if(x==1){
              count++;
            }
        }if(count%2==1){
           ans++;
        }
    }
    int ans1=0;
    for(int j=0;j<m;j++){
        int count1=0;
        for(int i=0;i<n;i++){
            if(a[i][j]==1){
                count1++;
            }
        }if(count1%2==1){
            ans1++;
        }
    }
    //cout<<ans<<" "<<ans1<<'\n';
    if(ans!=0 and ans1!=0){
        if(ans==ans1){
          cout<<ans1<<'\n';
        }
        else{
            cout<<max(ans,ans1)<<'\n';
        }
       
    }
    else{
        cout<<ans+ans1<<'\n';
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

