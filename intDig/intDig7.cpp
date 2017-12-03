// Парты

// В некоторой школе решили набрать три новых математических класса и оборудовать кабинеты для них новыми партами. За каждой партой может сидеть два учащихся. Известно количество учащихся в каждом из трех классов. Выведите наименьшее число парт, которое нужно приобрести для них. Каждый класс сидит в своем кабинете.

// Формат входных данных

// Программа получает на вход три целых неотрицательных числа: количество учащихся в каждом из трех классов (числа не превышают 1000).

// Формат выходных данных

// Выведите одно целое число - ответ на задачу.

#include <iostream>

using namespace std;

int main()
{
    int classRoom1, classRoom2, classRoom3;
    cin >> classRoom1 >> classRoom2 >> classRoom3;
    cout << (classRoom1 + 1) / 2 + (classRoom2 + 1) / 2 + (classRoom3 + 1) / 2 << endl;

    return 0;
}