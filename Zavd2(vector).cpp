#include <iostream>
#include <vector>
using namespace std;

int main() {

    int rows = 4;
    int cols = 4;

    vector<vector<int>> matrix(rows, vector<int>(cols));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = rand() % 21;
        }
    }

    cout << "Матриця:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    int sum = 0;

    cout << "Елементи над головною діагоналлю:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (j > i) {
                cout << matrix[i][j] << " ";
                sum += matrix[i][j];
            }
        }
    }
    cout << endl;
    cout << "Сума елементів над головною діагоналлю: " << sum << endl;
    return 0;
}