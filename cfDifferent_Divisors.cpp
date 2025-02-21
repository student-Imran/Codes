#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int nextPrime(int x) {
    while (!isPrime(x)) x++;
    return x;
}

void solve() {
    int d;
    cin >> d;
    
    int p1 = nextPrime(1 + d);      
    int p2 = nextPrime(p1 + d);     
    
    cout << p1 * p2 << '\n';        
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) solve();
    
    return 0;
}
