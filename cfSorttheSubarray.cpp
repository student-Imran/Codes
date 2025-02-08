#include<bits/stdc++.h>
using namespace std;

void solv() {
    int n;
    cin >> n;
    vector<int> a(n), a1(n);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> a1[i];


    int x = -1, y = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] != a1[i]) {
            if (x == -1) x = i;
            y = i;             
        }
    }

 
    while (x > 0 && a1[x - 1] <= a1[x]) x--; 
    while (y < n - 1 && a1[y] <= a1[y + 1]) y++; 

    cout << x + 1 << " " << y + 1 << '\n'; 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solv();
    }
    return 0;
}
