#include <iostream>

using namespace std;

int main (){
    int jumlah;
    cout<<"tulis berapa banyak perulangan; ";
    cin>>jumlah;
    
    for(int i =0; i< jumlah;i++){
        cout<<"perulangan ke-"<<i+1<<endl;
    }
}