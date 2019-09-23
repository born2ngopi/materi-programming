#include <iostream>

int main(){
  //langsung di inisialisasi
  int nilai_a = 10;
  std::cout<<nilai_a<<std::endl;

  //atau dideklarasi typedatanya terlebi dahulu
  int nilai_b;
  nilai_b = nilai_a;
  std::cout<<nilai_b<<std::endl;

  //ganti nilai_a menjadi 5
  nilai_a = 5;
  std::cout<<nilai_a<<std::endl;
  return 0;
}
