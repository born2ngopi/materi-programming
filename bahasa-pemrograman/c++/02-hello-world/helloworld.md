# c++

## Hello world

sebelum kita bahas kode-kode yang ada didalam c++, alangkah baiknya kita melakukan ritual pembelajaran terlebih dahulu.

> disini saya anggap teman-teman sudah menginstall c++ di laptop teman-teman. karana saya mengunakan OS linux maka tidak perlu lagi menginstall compiler c++ karna telah tersedia.

buat file `main.cpp` lalu isi dengan code berikut

```c++
#include <iostream>

int main(){
    std::cout<<"hello world"<<std::endl;
    return 0;
}
```

bila sudah silahkan save lalu compile file teman-teman dengan perintah :

```bash
g++ main.cpp -o main
```

lalu silahkan buka hasil compiler tersebut `./main`(linux & unix) `main`(windows)

``` bash
hello world
```

## Penjelasan Kode Program

```c++
#include <iostream>
```

`#include`merupakan kode yang digunakan untuk mengambil file lain yang akan dijalankan pada code program kita. dalam contoh diatas adalah file `iostream.h`, file ini mengurusi standar input output pada bahasa c++.

fungsi `main()` adalah entry-point pada bahasa c++, setiap program harus(wajib) memiliki satu fungsi main(), kode program akan dijalankan pertam kali pada fungsi ini

`cout` merupakan standar output pada c++ yang berada pada namespace std.

`endl`merupakan perintah code yang digunakan untuk mengakhiris baris(enter). 