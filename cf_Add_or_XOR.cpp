#include<bits/stdc++.h>
using namespace std;  
void solve()
{
   int a,b,x,y;cin>>a>>b>>x>>y;
   if(b<a){
    if((a^1)==b){
        cout<<y<<'\n';
    }
    else{
        cout<<"-1"<<'\n';
    }
   }
   else{
    int ans=0;
    for(int i=a;i<b;i++){
        
        if(i%2==0){
            ans+=min(x,y);
        }
        else{
            ans+=x;
        }
        //cout<<i<<" "<<ans<<'\n';
    }
    cout<<ans<<'\n';
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

