#include<bits/stdc++.h>
using namespace std; 
void solve()
{
 int n;cin>>n;
 if(n==2){
    cout<<66<<'\n';
 }
 else if(n==1 or n==3){
    cout<<-1<<'\n';
 }
 else if(n%2==0){
    for(int i=1;i<=n-2;i++){
            cout<<3;
        
    }cout<<66<<'\n';
 }
 else{
    int x=n-5;
    for(int i=1;i<=x;i++){
        cout<<3;
    }cout<<36366<<'\n';
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

