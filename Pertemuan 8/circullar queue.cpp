#include <iostream>
using namespace std; 

const int MAX = 20; 

class Queue { 
private: 
    int front; 
    int rear; 
    int arr[MAX]; 

public: 
    // Konstruktor: Set awal front dan rear ke -1 (tanda antrian kosong total)
    Queue() { 
        front = -1; 
        rear = -1; 
    } 
    
    // Fungsi untuk memasukkan data
    void enqueue(int data) { 
        // Cek apakah antrian penuh (posisi rear + 1 nabrak front)
        if ((rear + 1) % MAX == front) { 
            cout << "Antrian penuh (Queue is full)." << endl; 
            return; 
        } 
 
        // Jika ini adalah pasien/data pertama yang masuk
        if (front == -1) {
            front = 0; 
        }
 
        // Geser rear dengan sistem melingkar (modulo), lalu masukkan data
        rear = (rear + 1) % MAX; 
        arr[rear] = data; 
    } 
 
    // Fungsi untuk mengeluarkan data
    void dequeue() { 
        // Cek apakah antrian kosong
        if (front == -1) { 
            cout << "Antrian kosong (Queue is empty)." << endl; 
            return; 
        } 
 
        // Jika front dan rear di posisi sama (artinya sisa 1 data terakhir)
        if (front == rear) { 
            // Reset kembali ke kondisi awal (klinik kosong)
            front = -1; 
            rear = -1; 
        } else { 
            // Jika masih ada sisa antrian, geser front ke orang berikutnya
            front = (front + 1) % MAX; 
        } 
    } 
 
    // Fungsi untuk mengintip data terdepan
    int front_element() { 
        if (front == -1) { 
            cout << "Antrian kosong (Queue is empty)." << endl; 
            return -1; 
        } 
 
        return arr[front]; 
    } 
 
    // Fungsi untuk mengecek status kosong
    bool is_empty() { 
        return (front == -1); 
    } 
}; 
 
int main() { 
    Queue q; 
 
    // Memasukkan angka 1, 2, dan 3
    q.enqueue(1); 
    q.enqueue(2); 
    q.enqueue(3); 
 
    // Cek siapa yang paling depan (Pasti angka 1)
    cout << "Elemen terdepan adalah: " << q.front_element() << endl; 
    
    // Keluarkan angka 1 dari antrian
    q.dequeue(); 
    
    // Cek lagi siapa yang paling depan sekarang (Pasti angka 2)
    cout << "Elemen terdepan sekarang adalah: " << q.front_element() << endl; 
    
    // Keluarkan angka 2 dari antrian
    q.dequeue(); 
 
    return 0; 
}
