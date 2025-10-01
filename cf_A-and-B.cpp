#include<bits/stdc++.h>
using namespace std; 
#define ll long long int
void solve()
{
    int n;cin>>n;
    string s;cin>>s;
    int consecutive=1;
    int max_consecutive=-1;
    int count_a = count(s.begin(),s.end(),'a');
    int count_b = s.size() - count_a;
    int index=0;
    char c=s[0];
    if(count_a==n or count_b==n){
         cout<<0<<'\n';
         return;
    }
    for(int i=0;i<s.size()-1;i++){
        // cout<<s[i]<<" "<<s[i+1]<<'\n';
        if(s[i]==s[i+1]){
            consecutive++;
        }
        else{
            if(consecutive>max_consecutive){
                index = i;
                max_consecutive=consecutive;
                consecutive = 1;
                // cout<<s[i]<<'\n';
                c=s[i];
            }
            else{
                consecutive=1;
            }
        }
        // cout<<i<<" "<<max_consecutive<<'\n';
    }
     // cout<<c<<'\n';
    // cout<<"index "<<index <<'\n';
    max_consecutive=max(max_consecutive,consecutive);
    // cout<<max_consecutive<<'\n';
    // cout<<index<<'\n';
    int pre_index = (index-max_consecutive);
    int ans =0;
    // cout<<pre_index<<'\n';
    index++;
    if(count_a>count_b and max_consecutive>1){
       for(int i=0;i<s.size();i++){
        if(i<pre_index or i>index){
            if(s[i]=='a' and i<pre_index){
                ans+=(pre_index-i);
                pre_index=pre_index-1;
            }
            else if(s[i]=='a' and i>index){
                ans+=(i-index);
                index=index+1;
            }
        }
        // cout<<i<<" "<<ans<<'\n';
       }    
    }
    else if(count_b>count_a and max_consecutive>1){
        for(int i=0;i<s.size();i++){
        if(i<pre_index or i>index){
            if(s[i]=='b' and i<pre_index){
                ans+=(pre_index-i);
                pre_index=pre_index-1;
            }
            else if(s[i]=='b' and i>index){
                ans+=(i-index);
                index=index+1;
            }
        }
    }
    }
    else{
        // cout<<pre_index<<" "<<index<<'\n';
        
        if(count_a>count_b){
            if(count_a-2<0){
                cout<<0<<'\n';
            }
            else{
                cout<<count_a-2<<'\n';
            }
            return;
        }
        else if(count_b>count_a){
             if(count_b-2<0){
                cout<<0<<'\n';
            }
            else{
                cout<<count_b-2<<'\n';
            }
            return;
        }
        else if(count_a==count_b and max_consecutive==1){
            cout<<count_a-1<<'\n';
            return;
        }
        // cout<<pre_index<<" "<<index<<'\n';
        for(int i=0;i<s.size();i++){
        if(i<pre_index or i>index){
            if(s[i]==c and i<pre_index){
                ans+=(pre_index-i);
                pre_index=pre_index-1;
            }
            else if(s[i]==c and i>index){
                ans+=(i-index);
                index=index+1;
            }
        }
        // cout<<i<<" "<<ans<<'\n';
       }    
    }
    cout<<ans<<'\n';
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

