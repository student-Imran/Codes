#include <iostream>
#include <omp.h>
#include <vector>
#include <cstdlib>
using namespace std;

int main() {
    int m = 1024, n = 1024, p = 1024;
    vector<vector<float>> A(m, vector<float>(n));
    vector<vector<float>> B(n, vector<float>(p));
    vector<vector<float>> C(m, vector<float>(p, 0));

    // Initialize matrices
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            A[i][j] = rand() % 10;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < p; j++)
            B[i][j] = rand() % 10;

    double start = omp_get_wtime();

    #pragma omp parallel for collapse(2)
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            float sum = 0;
            for (int k = 0; k < n; k++) {
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }

    double end = omp_get_wtime();
    cout << "Execution Time (CPU with OpenMP): " << (end - start) << " seconds" << endl;
}
