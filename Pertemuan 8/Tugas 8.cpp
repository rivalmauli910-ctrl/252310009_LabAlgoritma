#include <iostream>
#define MAX 5 

using namespace std;

class Queue {
private:
    int front, rear, count;
    int arr[MAX];

public:

    Queue() {
        front = 0;
        rear = -1; 
        count = 0;
    }

    bool isEmpty() {
        return count == 0;
    }

    bool isFull() {
        return count == MAX;
    }

    void enqueue(int x) {
        if (isFull()) {
            cout << "Antrian penuh. Tidak dapat menambahkan nomor antrean " << x << endl;
            return;
        }
        rear = (rear + 1) % MAX;
        arr[rear] = x;
        count++;
        cout << "Nomor antrean " << x << " berhasil ditambahkan." << endl;
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Antrian kosong. Tidak ada pengunjung untuk dipanggil." << endl;
            return -1;
        }
        int x = arr[front];
        front = (front + 1) % MAX;
        count--;
        return x;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Antrian kosong." << endl;
            return -1;
        }
        return arr[front];
    }

    int size() {
        return count;
    }

    void display() {
        if (isEmpty()) {
            cout << "Antrian saat ini kosong." << endl;
            return;
        }
        cout << "Daftar nomor antrean: ";
        for (int i = 0; i < count; i++) {
            cout << arr[(front + i) % MAX] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue loket;

    loket.enqueue(101);
    loket.enqueue(102);
    loket.enqueue(103);
    
    loket.display();

    cout << "Memanggil nomor antrean: " << loket.dequeue() << endl;
    
    loket.display();
    cout << "Nomor antrean yang akan dipanggil selanjutnya: " << loket.peek() << endl;
    cout << "Total pengunjung dalam antrean: " << loket.size() << endl;

    return 0;
}
