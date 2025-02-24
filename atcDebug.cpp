#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
void solve()
{
    string s;
    cin>>s;
     int d=s.size();
    int count=0;
    for(int i=0;i<d;i++)
    {
        if(s[i]=='W')
        {
            count++;
        }
        else if(s[i]=='A')
        {
            
           if(count>0)
           {
            s[i-count]='A';
            for(int j=i-count+1;j<=i;j++)
            {
                s[j]='C';
            }
            count=0;
            
           }//cout<<s<<'\n';
        }
        else
        {
            count=0;
        }
    }cout<<s<<'\n';

   
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
   
    return 0;

}

