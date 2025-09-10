#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    char vars[5], ops[4];
    int temp_count = 1;
    map<char, string> var_map;
    vector<string>s;
    cin >>vars[0]>>ops[0]>>vars[1]>>ops[1]>>vars[2]>>ops[2]>>vars[3]>>ops[3]>>vars[4];
    for (int i = 0; i < 5; i++) {
        var_map[vars[i]] = string(1,vars[i]);
    }
    for (int i = 1; i < 4; i += 2) { 
        if (ops[i] == '*' || ops[i] == '/') {
            string temp = "t" + to_string(temp_count++);
            s.push_back(temp + " = " + var_map[vars[i]] + " " + ops[i] + " " + var_map[vars[i+1]]);
            var_map[vars[i]] = temp;
            var_map[vars[i+1]] = temp;
        }
    }
    for (int i = 0; i < 4; i += 2) { 
        if (ops[i] == '+' || ops[i] == '-') {
            string temp = "t" + to_string(temp_count++);
            s.push_back(temp + " = " + var_map[vars[i]] + " " + ops[i] + " " + var_map[vars[i+1]]);
            var_map[vars[i]] = temp;
            var_map[vars[i+1]] = temp;
        }
    }
    for (const string& line:s) {
        cout << line << endl;
    }

    return 0;
}