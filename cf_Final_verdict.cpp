#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
            int n,x;cin>>n>>x;
           int a[n];
           int sum=0;
           for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
           }
           if(sum%x==0 and sum/n==x){
            cout<<"YES\n";
           }
           else{
            cout<<"NO\n";
           }

    }
}