#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve() {
   string s,ss;
   cin>>s>>ss;
   std::vector<int> v,v1;
   int count=0;
   for(int i=0;i<s.size();i++){
    if(s[i]==s[i+1]){
        count++;
    }
    else{
        v.push_back(count+1);
        count=0;
    }
   }if(count!=0){
   v.push_back(count+1);
   }
   count=0;
   for(int i=0;i<ss.size();i++){
    if(ss[i]==ss[i+1]){
        count++;
    }
    else{
        v1.push_back(count+1);
        count=0;
    }
   }
   if(count!=0){
   v1.push_back(count+1);
   }
   
   int k=0,j=0,y=0,ok=0;
   for(int i=0;i<s.size();i++){
    if(s[i]==ss[y]){
        int x=v[k]*2;
        if(v1[j]<=x and v1[j]>=v[k]){
           y=y+v1[j];
           i=i+v[k]-1;
           j++;
           k++;
        }
        else{
            ok=1;
            break;
        }
        
    }
    else{
            ok=1;
            break;
        }
   }
   if(j!=v1.size()){
    ok=1;
   }
   if(ok==0){
    cout<<"YES\n";
   }else{
    cout<<"NO\n";
   }

   
   
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
