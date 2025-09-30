#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
void solve()
{
    int n,k;cin>>n>>k;
    int a[n];
    map<int,int>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
        m[a[i]]++;
    }
    int ans = m[k];
    int result = 0;
    for(int i=0;i<=n;i++){
        if(i<k){
            if(!m[i]){
                result++;
                if(ans){
                    ans--;
                }
            }
        }
        else if (i==k){
           if(ans){
            result+=ans;
           }
        }
    }cout<<result<<'\n';
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

