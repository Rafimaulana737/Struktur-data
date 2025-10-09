#include <iostream>
using namespace std;

void tampil(int a[], int n){
    cout << "[ ";
    for(int i=0;i<n;i++) cout<<a[i]<<(i<n-1?", ":" ");
    cout << "]" << endl;
}

int total(int a[], int n){
    int t=0; for(int i=0;i<n;i++) t+=a[i];
    return t;
}

int* terkecil(int a[], int n){
    int* min=&a[0];
    for(int i=1;i<n;i++) if(a[i]<*min) min=&a[i];
    return min;
}

int main(){
    int stok[]={12,8,25,5,18}, n=5;
    cout<<"Stok Buku Awal:"<<endl; tampil(stok,n);
    cout<<"Total semua stok buku: "<<total(stok,n)<<endl;
    *terkecil(stok,n)+=10;
    cout<<"\nStok Buku Setelah Penambahan Bonus:"<<endl;
    tampil(stok,n);
}
