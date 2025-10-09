#include <iostream>
#include <string>

using namespace std;

float hitungRataRata(int nilaiTugas, int nilaiUTS){
    return (nilaiTugas + nilaiUTS) / 2.0f;
}


    void cetakProfil(string nama, float nilai){
        cout<<"nama :"<<nama<<endl;
        cout<<"nilai :"<<nilai<<endl;

    }
    void beriNilaiBonus(float &nilai){
        nilai +=5.0f;
    }
    int main(){
        string namaSiswa ="budi";
        int tugas = 80, uts=90;

        float nilaiakhir = hitungRataRata(tugas, uts);

        cout<<"profil awal"<<endl;
        cetakProfil(namaSiswa, nilaiakhir);

        cout<<"\n...memberikan nilai bonus..."<<endl;
        beriNilaiBonus(nilaiakhir);

        cout<<"\nprofil setelah mendapat bonus"<<endl;
        cetakProfil(namaSiswa, nilaiakhir);
    
    }

