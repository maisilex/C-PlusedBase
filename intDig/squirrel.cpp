/*
 * N белочек нашли K орешков и решили разделить их поровну. Определите, сколько *орешков достанется каждой белочке.
 * Формат входных данных
*На вход дается два целых положительных числа N и K, каждое из которых не превышает *10000.
*Формат выходных данных
*Выведите одно целое число - ответ на задачу.
*
*/

#include <iostream>

using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    int nuts = K / N;
    cout << nuts << endl;

    return 0;
}