#include<bits/stdc++.h>
using namespace std; 
void solve()
{
    string s;cin>>s;
    int ok=0;
     int c1=count(s.begin(),s.end(),'?');
    if(s[0]=='?'){
        if(s[1]=='c'){
            s[0]='a';
        }
        else if(s[1]=='a'){
            s[0]='c';
        }
        else if(s[1]=='b'){
            s[0]='a';
        }
        else{
            s[0]='a';
        }
    }
    if(s.size()==c1){
        
        for(int i=0;i<s.size();i++){
        if(s[i]=='?' and s[i+1]=='?' and i<s.size()-1){
            if(s[i-1]=='a'){
                s[i]='b';
            }
            else if(s[i-1]=='b'){
                s[i]='a';
            }
            else if(s[i-1]=='c'){
                s[i]='a';
            }
        }
        else if(s[i]=='?' and i==s.size()-1)
        {
            if(s[i-1]=='a'){
                s[i]='b';
            }
            else if(s[i-1]=='b'){
                s[i]='a';
            }
            else if(s[i-1]=='c'){
                s[i]='a';
            }
        }
    }
    cout<<s<<'\n';
    }
    else{
    for(int i=0;i<s.size()-1;i++){
        if(s[i]!='?' and s[i]==s[i+1]){
            ok=1;
            break;
        }
    }
    if(ok==1){
        cout<<-1<<'\n';
    }
    else{
       for(int i=0;i<s.size();i++){
        if(s[i]=='?' and s[i+1]=='?' and i<s.size()-1){
            if(s[i-1]=='a'){
                s[i]='b';
            }
            else if(s[i-1]=='b'){
                s[i]='a';
            }
            else if(s[i-1]=='c'){
                s[i]='a';
            }
        }
        else if(s[i]=='?' and i<s.size()-1){
            if(s[i-1]!=s[i+1]){
                if(s[i-1]=='a' and s[i+1]=='b'){
                    s[i]='c';
                }
            else if(s[i-1]=='a' and s[i+1]=='c'){
                    s[i]='b';
                }
            else if(s[i-1]=='b' and s[i+1]=='a'){
                    s[i]='c';
                }
            else if(s[i-1]=='b' and s[i+1]=='c'){
                    s[i]='a';
                }
            else if(s[i-1]=='c' and s[i+1]=='b'){
                    s[i]='a';
                }
            else if(s[i-1]=='c' and s[i+1]=='a'){
                    s[i]='b';
                }
            }
            else{
                if(s[i-1]=='a'){
                    s[i]='b';
                }
                else if(s[i-1]=='c'){
                    s[i]='b';
                }
                else{
                    s[i]='a';
                }

            }
        }
        else if(s[i]=='?' and i==s.size()-1)
        {
            if(s[i-1]=='a'){
                s[i]='b';
            }
            else if(s[i-1]=='b'){
                s[i]='a';
            }
            else if(s[i-1]=='c'){
                s[i]='a';
            }
        }
       }cout<<s<<'\n';
    }
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

