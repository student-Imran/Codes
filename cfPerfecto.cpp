#include<bits/stdc++.h>
using namespace std;
void solve()
{
   long long int n;cin>>n;
   long long int s=n*(n+1)*1LL/2;
   long long int x=sqrtl(s);
   if(x*x==s){
   	cout<<-1<<'\n';
   }
   else{
   	int flag=0;
   	long long int  l=3;
   	cout<<2<<" "<<1<<" ";
   	long long int sum=3;
      for(int i=3;i<=n;i++){
      	
         sum+=l;
         long long int x1=sqrtl(sum);
         //cout<<l<<'\n';
         if((x1*x1)==sum){
         	cout<<l+1<<" ";
         	sum+=1;
         	flag=1;
         }
         else{
         	cout<<l<<' ';
         	if(flag==1){
             l=l+2;
             flag=0;
         	}
         	else if(flag==0){
         		l=l+1;
         		
         	}
         }
      }cout<<'\n';
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

