#include<bits/stdc++.h>
using namespace std;


#define ff first
#define ss second
#define pb push_back
#define ll long long int
#define all(v) (v).begin(),(v).end()
#define set_bits __builtin_popcountll  
int sp_table[1000000][20];
int ans(int a,int b)
{
    int l=b-a+1;
    int c=31-(__builtin_clz(l));
    //cout<<c<<endl;
    return min(sp_table[a][c],sp_table[b-(1<<c)+1][c]);
}

void solve()
{
   int n;
   cin>>n;
   int a[n+1];
   //cout<<n<<endl;
   int x=log2(n);
   //cout<<x<<endl;
   //int sp_table[n][x];
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
    sp_table[i][0]=a[i];
    //cout<<sp_table[i][0]<<endl;
   }
   
   for (int k=1;k<=x;k++)
   {
    
       for (int i=0;i+(1<<k)-1<n;i++)
       {
           sp_table[i][k]=min(sp_table[i][k-1],sp_table[i+(1<<k-1)][k-1]);
       }
   }
   int q;
   cin>>q;
   while(q--)
   {
    int l,r;
    cin>>l>>r;
    int o=ans(l,r);
    cout<<o<<endl;
   }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    /*int t;
    cin>>t;
    while(t--)
    */
    {
        solve();
    }
    return 0;

}

