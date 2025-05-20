#include<bits/stdc++.h>
using namespace std;
void solve()
{
   int n,a,c,d;cin>>n>>c>>d;
   int x;
   map<int,int>m;
   int mini=INT_MAX;
   for(int i =0;i<n*n;i++){
   	cin>>x;
   	m[x]++;
   	if(x<mini){
   		mini=x;
   	}
   }
   a=mini;
   //cout<<a<<'\n';
   int val=0;
   int ok=1;
   for(int i=0;i<n*n;i++){
   	if(i==0){
   		val=a;
   		if(!m[a]){
   			ok=0;break;
   		}else{
   			if(m[val]>0){
   				m[val]--;
   			}
   		}

   		//cout<<val<<" ";
   	}
   	else if(i%n==0){
   		a=a+c;
   		val=a;
   		if(!m[a]){
          ok=0;break;
   		}else{
   			if(m[val]>0){
   				m[val]--;
   			}
   		}

   		//cout<<val<<" ";
   	}else{
   		val=val+d;
   		if(!m[val]){
   			ok=0;break;
   		}else{
   			if(m[val]>0){
   				m[val]--;
   			}
   		}

   		//cout<<val<<" ";
   	}
   }if(ok==0){
   	cout<<"NO\n";
   }else{
   	cout<<"YEs\n";
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

