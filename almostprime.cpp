#include<bits/stdc++.h>
using namespace std;
int prime(int p)
{

    int c=0;
    for(int i=2;i<=p/2;i++)
    {
        if(p%i==0)

    {
        c++;
        break;
        //return 1;
    }
    }
    if(c==1)
    {
       return 0; 
    }
    else if(c==0)
    {
        return 1;
    }
}
int almp(int q)
{
   int c=0;
    for(int i=2;i<=q;i++)
    {
        if(q%i==0)
        {
            if(prime(i))
            {
                c++;
               
            }
        }
    }
    if(c==2)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}
int main()
{
    
    int n,ans=0;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        
        if(almp(i))
        {
            ans++;
        }
    }cout<<ans<<endl;
}