#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int a = 3, b = 2, c = 1, bil;

    system("cls");
    cout << "Bil-A\tBil-B\tBil-C\n";
    cout << "--------------------------" << endl;

    for (bil = 1; bil <= 10; ++bil) {
        a += b;
        b += c;
        c += 2;

        cout << a << "\t" << b << "\t" << c << endl;

        if (c == 13)
            break;
    }

    getch();
    return 0;
}
