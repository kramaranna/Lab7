#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Введіть розмір масиву: ";
    cin >> size;

    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        cout << "Введіть елемент " << i << ": ";
        cin >> arr[i];
    }

    long long sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i] * arr[i];
    }

    cout << "Сума квадратів елементів масиву: " << sum << endl;

    delete[] arr;

    return 0;
}