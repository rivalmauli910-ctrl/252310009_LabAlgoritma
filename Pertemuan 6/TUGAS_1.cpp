#include <iostream>
#include <string>
using namespace std;

class Elektronik {
private:
    string merk;
    int daya;

public:
    void setMerk(string m) { merk = m; }
    void setDaya(int d)    { daya = d; }

    string getMerk() { return merk; }
    int getDaya()    { return daya; }

    virtual void nyalakan() {
        cout << getMerk() << " dinyalakan!" << endl;
    }

    virtual void tampilInfo() {
        cout << "Merk : " << merk << endl;
        cout << "Daya : " << daya << " Watt" << endl;
    }
};

class TV : public Elektronik {
private:
    int ukuranLayar;
    string resolusi;

public:
    void setUkuranLayar(int u) { ukuranLayar = u; }
    void setResolusi(string r) { resolusi = r; }

    void nyalakan() override {
        cout << "[TV] " << getMerk() << " ditampilkan!" << endl;
    }

    void tampilInfo() override {
        Elektronik::tampilInfo();
        cout << "Layar    : " << ukuranLayar << " inch" << endl;
        cout << "Resolusi : " << resolusi << endl;
    }
};

class Laptop : public Elektronik {
private:
    string processor;
    int ram;

public:
    void setProcessor(string p) { processor = p; }
    void setRam(int r)          { ram = r; }

    void nyalakan() override {
        cout << "[Laptop] " << getMerk() << " ditampilkan!" << endl;
    }

    void tampilInfo() override {
        Elektronik::tampilInfo();
        cout << "Processor : " << processor << endl;
        cout << "RAM       : " << ram << " GB" << endl;
    }
};

int main() {
    TV tv;
    tv.setMerk("Samsung");
    tv.setDaya(150);
    tv.setUkuranLayar(43);
    tv.setResolusi("Full HD");
    tv.nyalakan();
    tv.tampilInfo();

    cout << endl;

    Laptop laptop;
    laptop.setMerk("Asus");
    laptop.setDaya(65);
    laptop.setProcessor("Intel i5");
    laptop.setRam(8);
    laptop.nyalakan();
    laptop.tampilInfo();

    return 0;
}
