#include <iostream>
#include <string>
#include <vector>

int main(){
    std::string kampus[] = {"universitas telkom", "universitas indonesia", "institut teknologi bandung", "universitas gadjah mada", "airlangga university"};
    std::cout<<"Daftar nama kampus:"<<std::endl;

    //menggunakan range-based for lop untuk menampilkan setiap elemen 
    for (const std ::string &nama_kampus : kampus) {
        std::cout<<"-" << nama_kampus << std::endl;
    }
    return 0;
}