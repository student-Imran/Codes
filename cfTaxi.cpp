#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> freq(5, 0); 
    for (int i = 0; i < n; i++) {
        int s;
        cin >> s;
        freq[s]++;
    }

    int taxis = 0;
    taxis += freq[4];
    int pair_3_and_1 = min(freq[3], freq[1]);
    taxis += pair_3_and_1;
    freq[3] -= pair_3_and_1;
    freq[1] -= pair_3_and_1;
    taxis += freq[3];
    taxis += freq[2] / 2;
    if (freq[2] % 2 == 1) {
        taxis++;
        freq[1] -= min(2, freq[1]); 
    }
   if (freq[1] > 0) {
        taxis += (freq[1] + 3) / 4; 
    }
    cout << taxis << endl;
    return 0;
}
