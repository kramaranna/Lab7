# Lab7
# Лабораторна робота №7: Опрацювання динамічних масивів.
**Виконав:** студентка групи 4СОМ, Крамар Анна (Варіант № 4)

## Завдання.
<img width="471" height="73" alt="image" src="https://github.com/user-attachments/assets/e70dda69-9d4d-41e1-baaa-ed10d2eef17f" />
<img width="439" height="23" alt="image" src="https://github.com/user-attachments/assets/d28aea7f-bc3c-4df5-b423-6f25cb577ece" />


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

```

### 💻 Результати кодів програм:
<img width="1141" height="638" alt="image" src="https://github.com/user-attachments/assets/dd9780b9-16ec-4f1a-a6d1-ffd8d59a10d9" />
<img width="1142" height="691" alt="image" src="https://github.com/user-attachments/assets/c0bca048-cfeb-40c6-8650-4c684a42f858" />


### 👁️ Візуалізація пам'яті:





### Висновок.
  Під час виконання практичної роботи я успішно реалізувала усі поставлені завдання, увесь написаний код працює коректно. 
   Цікаво було працювати з ітераторами, як на мене, вони відкривають зручні можливості для керування елементами списку. Цікаво було дослідити новий спосіб роботи зі списками.
   Візуалізація структури даних дуже допомогла краще зрозуміти логіку взаємозв'язків між елементами списку.
