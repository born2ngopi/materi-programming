# c++

## operator di c++

operator adalah simbol yag memberitahu compiler untuk melakukan perhitungan matematika atau manipulasi logic tertentu. c++ memliki banyak operator bawaan

* Arithmetic Operators
* Relational Operators
* Logical Operators

### arithmetic operator

sesuai namanya operator ini digunakan untuk perkitunan matematik

| operator | deskipsi                                |
| -------- | --------------------------------------- |
| +        | digunakn untuk pejumlahan               |
| -        | dignakan untuk pengurangan              |
| *        | digunakan untuk perkalian               |
| /        | digunakan untuk pembagian               |
| %        | modulus / sisa bagi                     |
| ++       | increment (menambahkan nilai per satu ) |
| --       | decrement (mengurangi nilai per satu)   |

### relational operator

operator perbandinan

| operator | deskripsi               |
| -------- | ----------------------- |
| ==       | sama dengan             |
| !=       | tidak sama dengan       |
| <=       | kurang dari sama dengan |
| >=       | lebih dari sama dengan  |
| >        | lebih dari              |
| <        | kurang dari             |

### logical operator

operator logika

| operator | deskripsi                                                    | contoh                       |
| -------- | ------------------------------------------------------------ | ---------------------------- |
| &&       | digunakn untuk mengecek apakah nilai darikedua data sama     | (true && false) hasil false  |
| \|\|     | digunakan untuk mngecek apakah ada salah satu nilai bernilai true | (true \|\| false) hasil true |
| !        | negasi / kebalikan                                           | !(true && false) hasil true  |

### contoh kode

```c++
#include <iostream>

int main(){
    // arithmetic operator
    int a = 1 + 2; //penjumlahan
    int b = 3 - 1; //pengurangan
    int c = 2 * 2; //perkalian
    int d = 6 / 3; //pembagian
    int e = 5 % 2; //modulo
    
    //operator perbandingan
    int x = 10;
    if (x == 9){
        std::cout<<"x sama dengan 9"<<std::endl;
    }else if(x <= 5){
        std::cout<<"x kurag dari sama dengan 5"<<std::endl;
    }else if(x >= 11){
        std::cout<<"x lebih dari sama dengan 11"<<std::endl;
    }else if(x < 2){
        std::cout<<"x kurang dari 2"<<std::endl;
    }else if (x > 8){
		std::cout<<"x lebih dari 8"<<std::endl;
    }else if(x != 10){
        std::cout<<"x tidak sama dengan 10"<<std::endl;
    }
}
```

