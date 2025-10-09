#include <iostream>

using namespace std;

int main() {

    int bukuperhari[7] = {2, 1, 3, 4, 5, 1, 2};
    int totalbuku = 0;

    cout << "laporan baca buku mingguan" << endl;

    for (int i = 0; i < 7; i++) {
        cout << "hari ke-" << i + 1 << ": " << bukuperhari[i]
             << " buku." << endl;
        totalbuku += bukuperhari[i];
    }
    cout << "total buku yang dibaca dalam seminggu: " << totalbuku << " buku" << endl;
}