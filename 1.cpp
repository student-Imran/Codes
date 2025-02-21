#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
     int x,y;
     cin>>x>>y;
     int gc=__gcd(x,y);
     x=x/gc;
     y=y/gc;
     if(y>x)
     {
        cout<<'>'<<'\n';
     }
     else if(x>y)
     {
        cout<<'<'<<'\n';
     }
     else
     {
        cout<<'='<<'\n';
     }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;

}

