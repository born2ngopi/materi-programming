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
