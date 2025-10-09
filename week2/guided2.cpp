#include <iostream>

using namespace std;

int main(){
    float hargaProduk =500;
    float* ptrharga;
    ptrharga = &hargaProduk;

    cout<<"harga awal produk: Rp"<<hargaProduk<<endl;
    cout<<"alamat memori harga"<<ptrharga<<endl;

    cout<<"\n...memberikan harga diskon 10% melalui pointer..."<<endl;

    *ptrharga =*ptrharga *0.9;
    cout<<"harga setelah diskon: Rp"<<hargaProduk<<endl;
    return 0;
}
