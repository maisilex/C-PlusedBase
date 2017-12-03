// Разность времен

// Даны значения двух моментов времени, принадлежащих одним и тем же суткам: часы, минуты и секунды для каждого из моментов времени. Известно, что второй момент времени наступил не раньше первого. Определите, сколько секунд прошло между двумя моментами времени.

// Формат входных данных

// Программа на вход получает три целых числа: часы, минуты, секунды, задающие первый момент времени и три целых числа, задающих второй момент времени.
// Формат выходных данных

// Выведите число секунд между этими моментами времени.

#include <iostream>

using namespace std;

int main()
{
    int hourStarted, minuteStarted, secondStarted, 
    hourFinished, minuteFinished, secondFinished;

    cin >> hourStarted >> minuteStarted >>secondStarted 
        >> hourFinished >> minuteFinished >> secondFinished;

    cout << (hourFinished * 3600 + minuteFinished * 60 + secondFinished) - 
            (hourStarted * 3600 + minuteStarted * 60 + secondStarted) << endl;
    
    return 0;
}