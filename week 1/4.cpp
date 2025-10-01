#include <iostream>

using namespace std;

int main(){
    double total_pembelian, diskon;

    cout<<"berapa total kamu belanja: Rp";
    cin>>total_pembelian;

    if (total_pembelian>=30000){
        diskon=0.1*total_pembelian;
        cout<<"kamu dapat diskon sebesar: "<<diskon <<" orang kaya lu bujang";
   }else{
        diskon=0;
        cout<<"maaf kamu tidak  punya uang, belanja lagi ya bujang";
   }
}