#include<bits/stdc++.h>
using namespace std;
void solve()
{
   int n;cin>>n;
   priority_queue<int>q;
   for(int i=1;i<=n;i++){
    q.push(i);
   }
   std::vector<int> v;
   while(q.size()!=1){
    int x=q.top();
    q.pop();
    int y=q.top();
    q.pop();
    int z=(x+y+1)/2;
    q.push(z);
    v.push_back(x);
    v.push_back(y);
   }cout<<q.top()<<'\n';
   for(int i=0;i<v.size();i=i+2){
    cout<<v[i]<<" "<<v[i+1]<<'\n';
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

