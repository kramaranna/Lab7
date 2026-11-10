#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    vector<int> arr;

    for (int i = 0; i < 10; i++) {
        int randomNum = rand() % 21 - 10;
        arr.push_back(randomNum);
    }

    cout << "Початковий масив:\n";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    long long sum = 0; // Змінна для зберігання суми квадратів

    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i] * arr[i];
    }

    cout << "\n\nСума квадратів елементів масиву: " << sum << endl;

    return 0;
}