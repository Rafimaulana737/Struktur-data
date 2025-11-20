#include "queue.h"
#include <iostream>

using namespace std;

// Asumsi: Kita mengganti 'infotype' dengan 'int'

void createQueue(Queue &Q) {
    Q.head = -1;
    Q.tail = -1;
}

bool isEmptyQueue(Queue Q) {
    // Antrian kosong jika head belum diinisialisasi (-1)
    // ATAU jika head telah melewati tail setelah dequeue terakhir
    return Q.head == -1; 
}

bool isFullQueue(Queue Q) {
    // Penuh jika tail mencapai batas array
    return Q.tail == MAX_QUEUE - 1;
}

void enqueue(Queue &Q, int x) { // infotype diganti int
    if (isFullQueue(Q)) {
        cout << "Antrean Penuh (Penuh Semu)!" << endl;
    } else {
        if (isEmptyQueue(Q)) {
            Q.head = 0; 
        }
        Q.tail++;
        Q.info[Q.tail] = x;
    }
}

int dequeue(Queue &Q) { // infotype diganti int
    if (isEmptyQueue(Q)) {
        cout << "Antrean Kosong!" << endl;
        // Seharusnya menggunakan mekanisme error yang lebih aman
        return -1; 
    } else {
        // Ambil nilai dari head
        int x = Q.info[Q.head];
        
        // Majukan HEAD satu langkah (Operasi O(1))
        Q.head++; 
        
        // Cek jika queue menjadi kosong (head melewati tail)
        if (Q.head > Q.tail) { 
            // Reset head dan tail ke kondisi kosong
            Q.head = -1; 
            Q.tail = -1;
        }
        return x;
    }
}

void printInfo(Queue Q) {
    cout << Q.head << " - " << Q.tail << " | ";
    if (isEmptyQueue(Q)) {
        cout << "empty queue" << endl;
    } else {
        for (int i = Q.head; i <= Q.tail; i++) {
            cout << Q.info[i] << " ";
        }
        cout << endl;
    }
}