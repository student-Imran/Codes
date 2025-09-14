#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
void solve()
{
    int n;
    cin>>n;
    int a[n];
    vector<int>odd;
    ll sum = 0;
    for(int i=0;i<n;i++){
      cin>>a[i];
      if(a[i]%2==1){
        odd.push_back(a[i]);
      }
      else{
        sum+=a[i];
      }

    }
    if(!odd.size()){
      cout<<0<<'\n';
      return;
    }
    sort(odd.rbegin(),odd.rend());
    if(odd.size()%2==0){
      for(int i=0;i<(odd.size()/2);i++){
         sum+=odd[i];
    }
    cout<<sum<<'\n';
    return;
    }
    for(int i=0;i<(odd.size()/2)+1;i++){
         sum+=odd[i];
    }
    cout<<sum<<'\n';

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

