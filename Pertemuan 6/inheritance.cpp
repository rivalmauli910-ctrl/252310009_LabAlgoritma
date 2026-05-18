#include <iostream>
using namespace std;

class BangunDatar {
protected:
    int lebar, tinggi;

public:
    void setValue(int a, int b) {
        lebar = a;
        tinggi = b;
    }
};

class PersegiPanjang : public BangunDatar {
public:
    int getValue() {
        return (lebar * tinggi);
    }
};

class Segitiga : public BangunDatar {
public:
    int getValue() {
        return (lebar * tinggi / 2);
    }
};

int main() {

    PersegiPanjang persegi_panjang;
    Segitiga segitiga;

    persegi_panjang.setValue(4, 5);
    segitiga.setValue(10, 5);

    cout << persegi_panjang.getValue() << endl;
    cout << segitiga.getValue() << endl;

    return 0;
}
