#include <iostream>
#include <numeric>
using namespace std;

struct Matrix {
    long long matrix[2][2];
    
    Matrix operator*(const Matrix& m) const {
        Matrix result;
        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < 2; j++)
            {
                result.matrix[i][j] = 0;
                for(int k = 0; k < 2; k++)
                {
                    result.matrix[i][j] += matrix[i][k] * m.matrix[k][j];
                    result.matrix[i][j] %= 1000000000;
                }
            }
        }
        return result;
    }
};

Matrix powerMatrix(Matrix base, long long level) {
    Matrix result = {1, 0, 0, 1};
    while (level > 0) {
        if (level % 2 == 1) result = result * base;
        base = base * base;
        level /= 2;
    }
    return result;
}

long long fibonacci(long long n) {
    if (n == 0) return 0;
    Matrix base = {1, 1, 1, 0};
    Matrix result = powerMatrix(base, n - 1);
    return result.matrix[0][0];
}

int main()
{
    long long n, m;
    cin >> n >> m;
    cout << (fibonacci(m+2) - fibonacci(n+1) + 1000000000) % 1000000000;
    return 0;
}