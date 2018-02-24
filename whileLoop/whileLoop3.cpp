// По данному числу N распечатайте все целые степени двойки, не превосходящие N, в порядке возрастания.

#include <iostream>

using namespace std;

int main() {
	int num;

    cin >> num;

    int count = 1;

    while (count <= num) {
        cout << count << ' ';
        count *= 2;
    }

	return 0;
}