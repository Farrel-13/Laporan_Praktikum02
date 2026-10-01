#include <iostream>
using namespace std;

void tukerPointer(int *a, int *b, int *c) {
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

void tukerReference(int &a, int &b, int &c) {
    int temp = a;
    a = b;
    b = c;
    c = temp;
}

int main() {
    int a = 10, b = 20, c = 30;

    cout << "Sebelum ditukar: ";
    cout << a << " " << b << " " << c << endl;

    tukerPointer(&a, &b, &c);

    cout << "Setelah pointer: ";
    cout << a << " " << b << " " << c << endl;

    tukerReference(a, b, c);

    cout << "Setelah reference: ";
    cout << a << " " << b << " " << c << endl;

    return 0;
}