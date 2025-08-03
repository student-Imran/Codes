#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve() {
  
   int n,s;cin>>n>>s;
   int a[n];
   int sum=0;
   map<int,int>m;
   for (int i = 0; i < n; ++i)
   {
   	cin>>a[i];
   	m[a[i]]++;
   	sum+=a[i];
   }
   if (sum==s)
   {
   	cout<<-1<<'\n';
   }
   else if (sum>s)
   {
   	for (int i = 0; i < n; ++i)
   	{
   		cout<<a[i]<<" ";
   	}cout<<'\n';
   }
   else{
         if (sum+1==s)
         {
        sort(a,a+n);
        for (int i = 0; i < n; ++i)
        {
          if (a[i]==0)
          {
            cout<<a[i]<<" ";
          }
          else{
            break;
          }
        }
        reverse(a,a+n);
        for (int i = 0; i < n; ++i)
        {
          if (a[i]!=0)
          {
            cout<<a[i]<<" ";
          }
        }cout<<'\n';
         }
         else{
          cout<<-1<<'\n';
         }
   }
}
   
  
   



int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int tt = 1; 
  cin >> tt; 
  while (tt--) {
    solve();
  }
}