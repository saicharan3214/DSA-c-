#include <iostream>
#include <vector>
using namespace std;
class Matrix {
private:
    vector<vector<int>> data;
public:
    Matrix(const vector<vector<int>>& input) : data(input) {}
    Matrix operator*(const Matrix& other) const {
        int rowsA = data.size();
        int colsA = data[0].size();
        int rowsB = other.data.size();
        int colsB = other.data[0].size();
        if (colsA != rowsB) {
            throw invalid_argument("Matrix dimensions are not suitable for multiplication.");
        }
        Matrix result(vector<vector<int>>(rowsA, vector<int>(colsB, 0)));
        for (int i = 0; i < rowsA; ++i) {
            for (int j = 0; j < colsB; ++j) {
                for (int k = 0; k < colsA; ++k) {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }
        return result;
    }
    void display() const {
        for (const auto& row : data) {
            for (int element : row) {
                cout << element << " ";
            }
            cout << endl;
        }
    }
};
int main() {
    Matrix matrixA({{1, 1, 1}, {1, 1, 1}});
    Matrix matrixB({{1, 1}, {1, 1,}, {1, 1}});
    try {
        Matrix resultMatrix = matrixA * matrixB;
        cout << "Matrix A:" << endl;
        matrixA.display();
        cout << "\nMatrix B:" << endl;
        matrixB.display();
        cout << "\nResult of Matrix A * Matrix B:" << endl;
        resultMatrix.display();
    } catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
