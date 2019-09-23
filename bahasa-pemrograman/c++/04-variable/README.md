# c++

## variable

variabel adalah tempat yang berfungsi untuk menyimpan data sementara, nilai variabel bisa berasal dari programmer, penguna, atau hasil pemrosessan program. cara deklarasi variabel di c++

`typedata` `nama_variable` = `nilai`

```c++
int main(){
    // langsung di insialisasi
    int nilai_a = 10;
    std::cout<<nilai_a<<std::endl;
    //atau dideklarasikan typenya terlebih dahulu
    int nilai_b;
    nilai_b = nilai_a;
    std::cout<<nilai_b<<std::endl;
}
```

kara vaiabel bersifat sementara yang berarti nilai suatu variabel dapat diganti dengan nilai yang lain asalkan masih dalam satu type data

```c++
int main(){
    int nilai_a = 10;
    std::cout<<nilai_a<<std::endl;
    
    int nilai_b;
    nilai_b = nilai_a;
    std::cout<<nilai_b<<std::endl;
    
    //ganti nilai_a menjadi 5
    nilai_a = 5;
    std::cout<<nilai_a<<std::endl;
}
```

### command

adalah suatu baris code yang tidak akan dieksekusi oleh compiler, dalam c++ command dimulai dengan garis mirin dua kali `//`.