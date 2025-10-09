# Laporan Praktikum Struktur Data

## 1. Nama, NIM, Kelas
- **Nama**: M Rafi Maulana Fadlurrahman
- **NIM**: 103112400264
- **Kelas**: IF12-05

## 2. Motivasi Belajar Struktur Data
Struktur Data merupakan salah satu fondasi penting dalam ilmu komputer. Oleh karena itu, saya berkomitmen untuk mempelajarinya secara mendalam agar dapat meningkatkan kemampuan analisis dan pemrograman saya.

## 3. Dasar Teori
Array, pointer, dan function, kita perlu tahu dulu kalau tiga hal ini tuh sama-sama bagian penting dari cara kerja program biar bisa nyimpen data, ngatur memori, dan ngejalanin perintah dengan lebih rapih.

Array: Array adalah struktur data yang digunakan untuk menyimpan beberapa nilai dengan tipe yang sama dalam satu variabel. Nilai-nilai ini tersusun secara berurutan dan bisa diakses menggunakan indeks. Indeks array dimulai dari angka 0, bukan 1. Jadi, elemen pertama ada di posisi ke-0, elemen kedua di posisi ke-1, dan seterusnya. Setiap nilai dalam array bisa diakses dengan menggunakan tanda kurung siku.

Pointer: pointer adalah variabel yang menyimpan alamat memori dari suatu nilai atau objek. Ini memungkinkan kita  untuk mengakses dan memanipulasi nilai atau objek tersebut dengan cara yang lebih efisien dan fleksibel.

Function: Function (dalam bahasa Indonesia adalah Fungsi). Function adalah sebuah struktur, Pengelompokan yang mengandung sekelompok pernyataan yang akan dilaksanakan oleh CPU jika nama function tersebut dipanggil untuk dieksekusi, kecuali untuk function utama yaitu int main() yang akan dieksekusi secara otomatis.

## 4. Guided
### 4.1 Guided 1
![alt text](image.png)

Program ini pada dasarnya adalah sebuah catatan digital untuk menghitung total buku yang di baca dalam seminggu. Pertama, ia menyimpan data jumlah buku harian (2, 1, 3, dst.) dalam sebuah daftar. Kemudian, dengan menggunakan perulangan for, program akan melihat setiap data harian itu satu per satu, menampilkannya ke layar sebagai laporan (misal: "hari ke-1: 2 buku"), dan pada saat yang sama langsung menjumlahkannya ke dalam variabel totalbuku. Setelah semua tujuh hari selesai dihitung, program akan menampilkan hasil akhir dari total  yang berhasil terkumpul selama seminggu itu.

ouput :
![alt text](image-2.png)
### 4.2 Guided 2
![alt text](image-1.png)
Tentu, ini penjelasan singkatnya dalam satu paragraf.

Kode ini menunjukkan cara kerja pointer, yaitu sebuah variabel yang tugasnya bukan menyimpan nilai, melainkan menyimpan alamat memori dari variabel lain. Pertama, program menetapkan hargaProduk senilai 500. Kemudian, sebuah pointer bernama ptrharga dibuat untuk "mencatat" di mana lokasi hargaProduk disimpan. Setelah menampilkan harga awal dan alamat memorinya, program mengubah harga tersebut dengan cara mengaksesnya melalui si pointer (*ptrharga = *ptrharga * 0.9), seolah-olah menyuruh "ubah nilai yang ada di alamat itu". Hasilnya, meskipun yang diubah adalah pointernya, variabel hargaProduk asli ikut berubah menjadi 450 karena mereka terhubung lewat alamat memori yang sama.

output :
![alt text](image-3.png)
### 4.3 Guided 3
![alt text](image-4.png)

Program ini mendemonstrasikan bagaimana sebuah fungsi bisa mengubah data asli dari program utama. Awalnya, program menghitung nilai rata-rata siswa dan menyimpannya dalam variabel nilaiakhir, lalu mencetak profil awalnya. Kuncinya ada pada fungsi beriNilaiBonus yang menggunakan parameter float &nilai (dikenal sebagai pass-by-reference), yang memberinya "izin" untuk langsung memodifikasi variabel nilaiakhir yang asli, bukan sekadar salinannya. Hasilnya, ketika profil siswa dicetak ulang setelah fungsi bonus dipanggil, nilai akhirnya secara permanen telah bertambah 5, dari 85 menjadi 90.
output :
![alt text](image-5.png)
## 5. Unguided
### 5.1 Unguided 1
![alt text](image-4.png)

Program di atas merupakan contoh sederhana penggunaan bahasa pemrograman C++ untuk menganalisis dan memanipulasi data stok buku menggunakan array, fungsi, dan pointer. Program ini menampilkan stok awal, menghitung total stok buku, mencari stok paling sedikit, lalu menambah bonus stok secara otomatis melalui pointer. Program ini menunjukkan konsep dasar C++ seperti penggunaan array, perulangan, fungsi, dan manipulasi data melalui alamat memori.
output :
![alt text](image-6.png)

## 6. Kesimpulan
Program di atas merupakan contoh sederhana penggunaan bahasa pemrograman C++ untuk menganalisis dan memanipulasi data stok buku menggunakan array, fungsi, dan pointer. Program ini menampilkan stok awal, menghitung total stok buku, mencari stok paling sedikit, lalu menambah bonus stok secara otomatis melalui pointer. Program ini menunjukkan konsep dasar C++ seperti penggunaan array, perulangan, fungsi, dan manipulasi data melalui alamat memori.

## 7. Referensi
1. Raharjo, Budi. (2011). Pemrograman C++ untuk Pemula. Informatika Bandung.
2. Nugroho, Adi. (2013). Algoritma dan Pemrograman Menggunakan C++. Andi Offset.
3. https://www.tutorialspoint.com/cplusplus/
    