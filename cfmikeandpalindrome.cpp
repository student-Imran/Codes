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
   string s;
   cin>>s;
   int j=s.length();
   j=j-1;
   int p=0,c=0;
   for(int i=0;i<s.size();i++)
   {
   	
     if(i>j)
     {
     	break;
     }
     else if(s[i]!=s[j])
     {
     	p++;
     	 j--;
     }
     else if(s[i]==s[j]&&(i==j))
     {
     	c++;
     	break;
     }
     else
     {
     	 j--;
     }


   }
   if((c==0)&&(p>=2))
   {
       cout<<"NO"<<endl;
   }
   else if((p>=2)&&(c==1))
   {
   	cout<<"NO"<<endl;
   }
   else if((c==0)&&(p==0))
   {
   	cout<<"NO"<<endl;
   }
   


   else
   {
   	cout<<"YES"<<endl;
   }
   
   
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	/*int t;
	cin>>t;
	while(t--)
	{*/
		solve();
	/*}
	return 0;
	*/

}

