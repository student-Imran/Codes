#include<bits/stdc++.h>
using namespace std;
int almp(int q)
{
    int divi=0;
    int r=0,c=0;
    for(int i=2;i<=q/2;i++)
    {
       
        if(q%i==0)
        {
            divi=1;
         
            for(int j=2;j<=i/2;j++)
            {
                c=0;
                if(i%j==0)
                {
                     c=1;
                     break;
                }
            }
            if(c==0)
            {
                r++;
                if(r==2)
                {
                    return 1;
                    
                }
            }
            
        }
        
    }
    if(r==1)
    {
        return 0;
    }
    if(divi==0)
    {
        return 0;
    }
    
    
}
int main()
{
    
    int n,ans=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        
        if(almp(i))
        {
            ans++;
        }
    }cout<<ans<<endl;
}