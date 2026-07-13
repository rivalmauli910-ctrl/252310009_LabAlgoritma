#include <iostream>
using namespace std;

// Deklarasi Node untuk Double Linked List
struct Node {
    int data;
    Node* next;
    Node* prev;
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    // Inisialisasi awal list kosong
    DoublyLinkedList() {
        head = NULL;
        tail = NULL;
    }

    // Fungsi untuk menambahkan node di akhir (Tail)
    void append(int data) {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = NULL;
        newNode->prev = NULL;

        if (head == NULL) {
            // Jika list masih kosong
            head = newNode;
            tail = newNode;
        } else {
            // Jika sudah ada isinya, sambungkan di belakang
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode; // Pindahkan tail ke node baru
        }
    }

    // Fungsi untuk menampilkan isi Double Linked List
    void display() {
        Node* temp = head;
        cout << "Bentuk Doubly Linked List:" << endl;
        cout << "NULL <- ";
        while (temp != NULL) {
            cout << "[ " << temp->data << " ]";
            if (temp->next != NULL) {
                cout << " <-> ";
            }
            temp = temp->next;
        }
        cout << " -> NULL" << endl;
    }
};

int main() {
    DoublyLinkedList dll;

    // Memasukkan data sesuai urutan di ilustrasi
    dll.append(24);
    dll.append(10);
    dll.append(33);
    dll.append(33);

    // Menampilkan output
    dll.display();

    return 0;
}
