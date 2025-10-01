#include <iostream>

using namespace std;
int main(){
    string makan; // Perbaiki: tambahkan titik koma

    cout<<"Masukkan nama makanan favorit Anda: ";

    getline(cin, makan);
    cout<<"Makanan favorit Anda adalah: " << makan << endl;
    return 0;
}