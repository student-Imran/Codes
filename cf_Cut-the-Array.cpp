#include<bits/stdc++.h>
using namespace std; 
#define ll long long int

void solve()
{
    int n;cin>>n;
    int a[n];
    set<int>s;
    for(int i=0;i<n;i++){
    	cin>>a[i];
    	a[i]=a[i]%3;
    	s.insert(a[i]);
    }
    	if(n==3 and s.size()==3){
    		cout<<1<<" "<<2<<'\n';
    		return;
    	}
    	else{
    	   for (int l = 0; l < n - 2; l++) {

            for (int r = l + 1; r < n - 1; r++) {
                int s1 = 0, s2 = 0, s3 = 0;
                for (int i = 0; i <= l; i++){
                	s1+=a[i];
                	s1=s1%3;
                } 
                for (int i = l + 1; i <= r; i++){
                	s2 += a[i];
                	s2=s2%3;
                } 
                for (int i = r + 1; i < n; i++){
                    s3+=a[i];
                    s3=s3%3;
                }
                // cout<<s1<<" "<<s2<<" "<<s3<<'\n';
                if ((s1 != s2 && s1 != s3 && s2 != s3) || (s1 == s2 && s2 == s3)) {
                    cout << l+1 << ' ' << r+1 << endl;
                    return;
                }
            }
        
    	
    	}cout<<0<<" "<<0<<'\n';
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
