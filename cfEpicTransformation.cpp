#include<bits/stdc++.h>
using namespace std;


#define ff first
#define ss second
#define pb push_back
#define ll long long int
#define all(v) (v).begin(),(v).end()
#define set_bits __builtin_popcountll  


void solve()
{
   int n;
   cin>>n;
   int a[n];
   //stack<int>st;
   map<int,int>m;
   for (int i = 0; i < n; ++i)
   {
   	cin>>a[i];
   	m[a[i]]++;
   }
   //cout<<st.size()<<endl;
   //cout<<m.size()<<endl;

   int a1=0;
   int x=0;
   for (auto &it:m) 
   {
   	/* code */
   	int y;
   	y=it.second;
   	//cout<<y<<endl;
   	x=abs(y-a1);
   	a1=x;


   }
   cout<<a1<<endl;

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

