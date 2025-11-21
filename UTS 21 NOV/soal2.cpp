//File: soal2.cpp
//Author: M Rafi Maulana Fadhlurrahman
//NIM: 103112400264
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;//pointer ke node berikutnya
};

Node* head = nullptr;//pointer ke node pertama
Node* tail = nullptr;//pointer ke node terakhir

//insert akhir
void insertAkhir(int x) {//fungsi untuk menambahkan node di akhir
    Node* baru = new Node{x, nullptr, nullptr};//membuat node baru
    if (head == nullptr) {//jika list kosong
        head = tail = baru;//jika list kosong, head & tail menunjuk ke node baru
        return;
    }
    tail->next = baru;//menghubungkan node terakhir ke node baru
    baru->prev = tail;//menghubungkan node baru ke node terakhir
    tail = baru;
}

//delete terakhir
void deleteLast(){
    if (tail == nullptr) return;//jika list kosong
    if (head == tail) {//jika hanya ada satu node
        delete tail;//menghapus node terakhir
        head = tail = nullptr;//set head & tail ke nullptr
        return;
    }
    Node* hapus = tail;
    tail = tail->prev;//pindah tail ke node sebelumnya
    tail->next = nullptr;//memutuskan link ke node terakhir
    delete hapus;
}
//melihat dari depan ke belakang
void viewDepan() {
    Node* temp = head;
    while (temp != nullptr) {  //iterasi sampai akhir
        cout << temp->data << " ";//menampilkan data
        temp = temp->next;//iterasi maju
    }
    cout << endl;
}
//reverse tanpa node baru
void reverseList(){
    Node* temp = head;//mulai dari head
    while (temp != nullptr) {//iterasi sampai akhir
        Node* next = temp->next;
        //tukar pointer
        temp->next = temp->prev;
        temp->prev = next;//iterasi ke node berikutnya
        temp = next;
    }
    //swap head & tail
    Node* swapTemp = head;
    head = tail;
    tail = swapTemp;
}

int main() {
int menu;
while (true) {
    cout << "Menu: 1 insert (end), 2 delete (last), 3 view (depan), 4 reverse & view (depan), 0 exit\n";
    cin >> menu;
    if (menu == 0) break;
    if (menu == 1) {
cout << "Masukkan nilai: ";
int x;
cin >> x;
insertAkhir(x);
}
else if (menu == 2) {
    deleteLast();
}
else if (menu == 3) {
    viewDepan();
}
else if (menu == 4) {
    reverseList();
cout << "List setelah di-reverse: ";
viewDepan();
     }
           }
return 0;
}