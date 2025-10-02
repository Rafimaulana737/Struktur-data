#include <iostream>
using namespace std;

string angka[] = {"nol","satu","dua","tiga","empat","lima","enam","tujuh","delapan","sembilan"};
string puluh[] = {"","sepuluh","dua puluh","tiga puluh","empat puluh","lima puluh", "enam puluh","tujuh puluh","delapan puluh","sembilan puluh"};

string konversi(int n) {
    if (n < 10) return angka[n];
    else if (n < 20) {
        if (n == 10) return "sepuluh";
        if (n == 11) return "sebelas";
        return angka[n % 10] + " belas";
    } else if (n < 100) {
        if (n % 10 == 0) return puluh[n/10];
        return puluh[n/10] + " " + angka[n%10];
    } else if (n == 100) {
        return "seratus";
    }
    return "di luar jangkauan";
}

int main() {
    int x;
    cout << "Masukkan angka (0-100): ";
    cin >> x;
    cout << x << " : " << konversi(x) << endl;
    return 0;
}
