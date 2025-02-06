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
 for(int i=0;i<n;i++)
 {
 	cin>>a[i];
 	
 }  
 sort(a,a+n);
 int c=1,m=1;
 for(int i=1;i<n;i++)
 	{
 		if(a[i]==a[i-1])
 		{
 			c++;
 			if(c>=m)
 			{
 				m=c;
 				
 			}
 		}
 		else
 		{
 			
 			c=1;
       }

 		
 		
}

	cout<<(n-m)<<endl;




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

