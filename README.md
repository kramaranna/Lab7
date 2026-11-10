# Lab7
# Лабораторна робота №7: Опрацювання динамічних масивів.
**Виконав:** студентка групи 4СОМ, Крамар Анна (Варіант № 4)

## Завдання.
<img width="471" height="73" alt="image" src="https://github.com/user-attachments/assets/e70dda69-9d4d-41e1-baaa-ed10d2eef17f" />
<img width="439" height="23" alt="image" src="https://github.com/user-attachments/assets/d28aea7f-bc3c-4df5-b423-6f25cb577ece" />
<img width="457" height="52" alt="image" src="https://github.com/user-attachments/assets/556774f8-df1c-497a-b13c-71d28da95570" />
<img width="869" height="31" alt="image" src="https://github.com/user-attachments/assets/f96c7dc5-05bd-4230-8092-6015fe94b4b1" />



### 💻 Коди програм 1-3:
```cpp
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
```
---
```cpp
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
```
---
```cpp
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
```

### 💻 Результати кодів програм:
<img width="1141" height="638" alt="image" src="https://github.com/user-attachments/assets/dd9780b9-16ec-4f1a-a6d1-ffd8d59a10d9" />
<img width="1142" height="691" alt="image" src="https://github.com/user-attachments/assets/c0bca048-cfeb-40c6-8650-4c684a42f858" />
<img width="1288" height="761" alt="image" src="https://github.com/user-attachments/assets/932a592c-7ef9-4987-9049-69d0f42cd982" />


### Висновок.
     Під час лабораторної роботи я виконала перше завдання двома способами: спочатку за допомогою вказівника, а потім за допомогою вектора. Вказівники допомогли зрозуміти, як масив зберігається в пам'яті, але вимагають ручного звільнення пам'яті через delete[]. Друге завдання я виконала за допомогою вектора, тому що хотіла попрацювати з ним, адже це для мене щось нове і цікаве. У результаті я переконалась, що вектор значно зручніший, бо сам керує пам'яттю та робить код простішим.
