#include<bits/stdc++.h>
using namespace std; 
void solve()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
        int count=0;
        if((a>c and b>=d) or (a>=c and b>d)){
            count++;
        }
        if((a>d and b>=c) or (a>=d and b>c)){
            count++;
        }
        if((b>c and a>=d) or (b>=c and a>d)){
            count++;
        }
        if((b>d and a>=c) or (b>=d and a>c)){
            count++;
        }

        cout<<count<<'\n';

    
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

