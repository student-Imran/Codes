#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
   int n;cin>>n;
   int si=n*(n-1)/2;
   std::vector<int>v;
   int b[si];
   for(int i=0;i<si;i++){
    cin>>b[i];
    v.push_back(b[i]);
   }
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    sort(b,b+si);
    int j=0;
   for(int i=0;i<si-1;i++){
    if(b[i]==b[i+1]){
         count++;
    }
    else{
        cout<<v[j]<<" ";qQ
        j++;
    }
   }
   for(int s=j;s<v.size();s++)
   {
    cout<<v[s]<<" ";
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

