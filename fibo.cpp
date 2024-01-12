#include <iostream>
#include <vector>

typedef std::vector<std::vector<long long>> Matrix;

Matrix multiply(const Matrix &a, const Matrix &b, int mod) {
    int rows_a = a.size();
    int cols_a = a[0].size();
    int cols_b = b[0].size();

    Matrix result(rows_a, std::vector<long long>(cols_b, 0));

    for (int i = 0; i < rows_a; ++i) {
        for (int j = 0; j < cols_b; ++j) {
            for (int k = 0; k < cols_a; ++k) {
                result[i][j] = (result[i][j] + (a[i][k] * b[k][j]) % mod) % mod;
            }
        }
    }

    return result;
}

Matrix matrixPower(const Matrix &matrix, long long exp, int mod) {
    if (exp == 1) {
        return matrix;
    }

    if (exp % 2 == 0) {
        Matrix half_pow = matrixPower(matrix, exp / 2, mod);
        return multiply(half_pow, half_pow, mod);
    } else {
        Matrix half_pow = matrixPower(matrix, exp / 2, mod);
        Matrix result = multiply(multiply(half_pow, half_pow, mod), matrix, mod);
        return result;
    }
}

long long fibonacci(int n, int mod) {
    if (n == 0) return 0;

    Matrix baseMatrix = {{1, 1}, {1, 0}};
    Matrix resultMatrix = matrixPower(baseMatrix, n - 1, mod);

    return resultMatrix[0][0];
}

int main() {
    int n = 7;
    int mod = 1000000007; // You can choose a suitable modulo value

    long long result = fibonacci(n, mod);

    std::cout << "The " << n << "-th Fibonacci number is: " << result << std::endl;

    return 0;
}
