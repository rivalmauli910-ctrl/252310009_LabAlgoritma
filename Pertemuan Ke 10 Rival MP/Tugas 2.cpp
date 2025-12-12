#include<iostream>
using namespace std;

int konversisuhu(int pilihan);

int main(){
    int pilihan, hasil;
    cout << "Pilih konversi suhu:\n";
    cout << "1. Farenheit ke Celcius\n";
    cout << "2. Kelvin ke Celcius\n";
    cout << "3. Reamur ke Celcius\n";
    cout << "4. Celcius ke Farenheit\n";
    cout << "5. Kelvin ke Farenheit\n";
    cout << "6. Reamur ke Farenheit\n";
    cout << "7. Celcius ke Reamur\n";
    cout << "8. Farenheit ke Reamur\n";
    cout << "9. Kelvin ke Reamur\n";
    cout << "10. Celcius ke Kelvin\n";
    cout << "11. Farenheit ke Kelvin\n";
    cout << "12. Reamur ke Kelvin\n";
    cout << "Masukkan pilihan (1-12): ";
    cin >> pilihan;

    int hasilKonversi = konversisuhu(pilihan);
            
    if(pilihan == 1,8,11){
        cout << "Konversi dari Farenheit" << endl;
    }
    else if(pilihan == 2,5,9){
        cout << "Konversi dari Kelvin." << endl;
    }
    else if(pilihan == 3,6,12){
        cout << "Konversi dari Reamur." << endl;
    }
    else if(pilihan == 4,7,10){
        cout << "Konversi dari Celcius." << endl;

    }
    if(hasilKonversi != 0 && pilihan == 1,2,3){
        cout << "Hasil konversi dalam Celcius: " << hasilKonversi << " °C" << endl;
    }
    else if(hasilKonversi != 0 && pilihan == 4,5,6){
        cout << "Hasil konversi dalam Farenheit: " << hasilKonversi << " °F" << endl;
    }
    else if(hasilKonversi != 0 && pilihan == 7,8,9){
        cout << "Hasil konversi dalam Reamur: " << hasilKonversi << " °R" << endl;
    }
    else if(hasilKonversi != 0 && pilihan == 10,11,12){
        cout << "Hasil konversi dalam Kelvin: " << hasilKonversi << " K" << endl;
    }
    return 0;
}

int konversisuhu(int pilihan){
    int suhu, hasil;
    switch(pilihan){
        case 1:
        cout << "Masukkan suhu dalam Farenheit: ";
            cin >> suhu;
            hasil = (suhu - 32) * 5 / 9;
            break;
        case 2:
            cout << "Masukkan suhu dalam Kelvin: ";
            cin >> suhu;
            hasil = suhu - 273;
            break;
        case 3:
            cout << "Masukkan suhu dalam Reamur: ";
            cin >> suhu;
            hasil = suhu * 5 / 4;
            break;
        case 4:
            cout << "Masukkan suhu dalam Celcius: ";
            cin >> suhu;
            hasil = (suhu * 9 / 5) + 32;
            break;
        case 5:
            cout << "Masukkan suhu dalam Kelvin: ";
            cin >> suhu;
            hasil = (suhu - 273) * 9 / 5 + 32;
            break;
        case 6:
            cout << "Masukkan suhu dalam Reamur: ";
            cin >> suhu;
            hasil = (suhu * 9 / 4) + 32;
            break;
        case 7:
            cout << "Masukkan suhu dalam Celcius: ";
            cin >> suhu;
            hasil = suhu * 4 / 5;
            break;
        case 8:
            cout << "Masukkan suhu dalam Farenheit: ";
            cin >> suhu;
            hasil = (suhu - 32) * 4 / 9;
            break;
        case 9:
            cout << "Masukkan suhu dalam Kelvin: K";
            cin >> suhu;
            hasil = (suhu - 273) * 4 / 5;
            break;
        case 10:
            cout << "Masukkan suhu dalam Celcius: ";
            cin >> suhu;
            hasil = suhu + 273;
            break;
        case 11:
            cout << "Masukkan suhu dalam Farenheit: ";
            cin >> suhu;
            hasil = (suhu - 32) * 5 / 9 + 273;
            break;
        case 12:
            cout << "Masukkan suhu dalam Reamur: ";
            cin >> suhu;
            hasil = (suhu * 5 / 4) + 273;
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
            hasil = 0;
            break;
    }
    return hasil;
}
