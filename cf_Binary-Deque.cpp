#include<bits/stdc++.h>
using namespace std; 
void solve()
{
  int n,s;cin>>n>>s;
  int a[n];
  int sum=0;
  for (int i = 0; i < n; ++i)
  {
    cin>>a[i];
    sum+=a[i];
  }
  if(sum<s){
    cout<<-1<<'\n';
    return;
  }
  else if(sum==s){
    cout<<0<<'\n';
    return;
  }

  int delete_item=sum-s;
  int left=0,right=n-1;
  int left_ans=1,right_ans=1;
  int ans=0;
  int left_delete_item,right_delete_item;
  left_delete_item=delete_item;
  right_delete_item=delete_item;
  int left_delete_item_ans;
  int right_delete_item_ans;
  for (int i = 0; i < n; ++i)
  {
    if (a[i]==1)
    {
      left_delete_item--;
      if (left_delete_item==0)
      {
        while(a[i]!=1){
          i++;
        }
        
      }
    }
  }
  for (int i = n-1; i >=0; --i)
  {
    if (a[i]==1)
    {
      right_delete_item--;
      if (right_delete_item==0)
      {
        right_delete_item_ans=n-i;
        break;
      }
    }
  }
  while(delete_item){
    if(a[left]==1){
      delete_item--;
      ans+=left_ans;
      left++;
      left_ans=1;
    }
    else if(a[right]==1){
      delete_item--;
      ans+=right_ans;
      right--;
      right_ans=1;
    }
   else if (a[left]==0 and a[right]==0)
    {
      left++;
      left_ans++;
      right--;
      right_ans++;
    }
    else if(a[left]==1 and a[right]==1){
      delete_item--;
      int mini=min(left_ans,right_ans);
      if (mini==left_ans)
      {
        ans+=left_ans;
        left_ans=1;
        left++;
      }
      else{
        ans+=right_ans;
        right_ans=1;
        right--;
      }
    }
  
    if (delete_item==0)
    {
      cout<<min(left_delete_item_ans,min(right_delete_item_ans , ans))<<'\n';
      return;
    }
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

