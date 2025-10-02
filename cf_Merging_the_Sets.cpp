#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
void solve()
{
    int n,m;cin>>n>>m;
    vector<vector<int>>v(n);
    map<int,int>ma;
    for(int i=0;i<n;i++){
        int nSize;cin>>nSize;
        for(int j=0;j<nSize;j++){
            int ele;cin>>ele;
            v[i].push_back(ele);
            ma[ele]++;

        }
    }
    for(int i=1;i<=m;i++){
        if(!ma[i]){
            cout<<"NO\n";
            return;
        }
    }
    int ans=0;
    for(int i=0;i<n;i++){
        bool no=true;
        vector<int>pre;
        for(int j=0;j<v[i].size();j++){
            pre.push_back(v[i][j]);
            ma[v[i][j]]--;
            if(ma[v[i][j]]<=0){
                no=false;
                break;
            }
        }
        for(auto x:pre){
            ma[x]++;
        }
        // cout<<'\n';
        // cout<<ans<<" "<<no<<'\n';
        if(no){
            ans++;
            if(ans==2){
                cout<<"YES\n";
                return;
            }
        }
    }
    cout<<"NO\n";
    

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

