#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
void solve()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int mini = *min_element(a,a+n);
    set<int>s;
    for(int i=0;i<n;i++){
        if(a[i]!=mini){
         s.insert(a[i]);
        }
    }
    cout<<(2*s.size())+1<<'\n';

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

