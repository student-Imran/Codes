#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;

// Segment tree structure to handle range counting queries
struct SegmentTree {
    vector<int> tree;
    int n;
    
    SegmentTree(const vector<ll>& arr) {
        n = arr.size();
        tree.resize(4 * n, 0);
        build(arr, 1, 0, n - 1);
    }
    
    // Build the segment tree
    void build(const vector<ll>& arr, int node, int start, int end) {
        if (start == end) {
            // Leaf node represents a single employee
            tree[node] = 1;
            return;
        }
        
        int mid = start + (end - start) / 2;
        build(arr, 2 * node, start, mid);
        build(arr, 2 * node + 1, mid + 1, end);
        
        // Internal node counts employees in its range
        tree[node] = tree[2 * node] + tree[2 * node + 1];
    }
    
    // Update a single position (employee salary)
    void update(int node, int start, int end, int idx, ll oldVal, ll newVal, 
               const vector<ll>& salaries) {
        if (start > idx || end < idx) return;
        
        if (start == end) {
            // This is a leaf node and corresponds to the employee we want to update
            return;
        }
        
        int mid = start + (end - start) / 2;
        update(2 * node, start, mid, idx, oldVal, newVal, salaries);
        update(2 * node + 1, mid + 1, end, idx, oldVal, newVal, salaries);
    }
    
    // Count employees in salary range [a, b]
    int query(int node, int start, int end, ll a, ll b, const vector<ll>& salaries) {
        // No overlap
        if (start > end || salaries[end] < a || salaries[start] > b) {
            return 0;
        }
        
        // Complete overlap
        if (salaries[start] >= a && salaries[end] <= b) {
            return tree[node];
        }
        
        // Partial overlap
        int mid = start + (end - start) / 2;
        int left = query(2 * node, start, mid, a, b, salaries);
        int right = query(2 * node + 1, mid + 1, end, a, b, salaries);
        
        return left + right;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, q;
    cin >> n >> q;
    
    vector<ll> salaries(n);
    for (int i = 0; i < n; i++) {
        cin >> salaries[i];
    }
    
    // We need to track both the original salaries and their sorted version
    vector<ll> sortedSalaries = salaries;
    vector<int> positions(n);
    
    // Initialize a segment tree to track the count
    SegmentTree st(salaries);
    
    while (q--) {
        char type;
        cin >> type;
        
        if (type == '!') {
            // Update query
            int k;
            ll x;
            cin >> k >> x;
            k--; // Convert to 0-indexed
            
            ll oldSalary = salaries[k];
            salaries[k] = x;
            st.update(1, 0, n - 1, k, oldSalary, x, salaries);
        } else if (type == '?') {
            // Range query
            ll a, b;
            cin >> a >> b;
            
            // Count employees with salaries in range [a, b]
            int count = 0;
            for (int i = 0; i < n; i++) {
                if (salaries[i] >= a && salaries[i] <= b) {
                    count++;
                }
            }
            cout << count << "\n";
        }
    }
    
    return 0;
}