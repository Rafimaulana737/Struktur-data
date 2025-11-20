#include "queue.h"
#include <iostream>

using namespace std;

// Asumsi: MAX_QUEUE ada di queue.h, dan tipe data elemen adalah int.

void createQueue(Queue &Q) {
    Q.head = -1;
    Q.tail = -1;
}

bool isEmptyQueue(Queue Q) {
    return Q.head == -1; // Cek head atau tail sama-sama valid
}

bool isFullQueue(Queue Q) {
    // Penuh hanya terjadi ketika tail mencapai batas akhir array
    return Q.tail == MAX_QUEUE - 1;
}

void enqueue(Queue &Q, int x) { // Menggunakan int, bukan infotype
    if (isFullQueue(Q)) {
        cout << "Antrean Penuh!" << endl;
    } else {
        if (isEmptyQueue(Q)) {
            Q.head = 0; 
        }
        Q.tail++;
        Q.info[Q.tail] = x;
    }
}

// PERBAIKAN UTAMA: Dequeue yang Efisien O(1)
int dequeue(Queue &Q) { // Menggunakan int, bukan infotype
    if (isEmptyQueue(Q)) {
        cout << "Antrean Kosong!" << endl;
        return -1;
    } else {
        // 1. Ambil nilai dari posisi head
        int x = Q.info[Q.head];
        
        // 2. Majukan HEAD satu langkah (Operasi O(1))
        Q.head++; 

        // 3. Cek kondisi reset (jika queue menjadi kosong)
        if (Q.head > Q.tail) { 
            // Antrian kosong karena head sudah melewati tail
            Q.head = -1; 
            Q.tail = -1;    
        }
        return x; 
    }
}

void printInfo(Queue Q) {
    cout << Q.head << " - " << Q.tail << " : "; 
    if (isEmptyQueue(Q)) {
        cout << "empty queue" << endl; 
    } else {
        // Cetak dari head hingga tail
        for (int i = Q.head; i <= Q.tail; i++) {
            cout << Q.info[i];
            if (i < Q.tail) {
                cout << " ";
            }
        }
        cout << endl;
    }
}