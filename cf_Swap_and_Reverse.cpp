#include<bits/stdc++.h>
using namespace std;  
void solve()
{
   int n,x;
   cin>>n>>x;
   string s;cin>>s;
   vector<char>v,e,o;
   if(x%2==0){
    sort(s.begin(),s.end());
    cout<<s<<'\n';
    return;
   }
   for(int i=0;i<n;i++){
        if(i%2==0){
            o.push_back(s[i]);
        }else{
            e.push_back(s[i]);
        }
   }
   sort(o.begin(),o.end());
   sort(e.begin(),e.end());
   int k=0,j=0;
   for(int i=0;i<n;i++){
    if(i%2==0){
        cout<<o[k];
        k++;
    }else{
        cout<<e[j];
        j++;
    }
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

