#include <iostream>
#include "binrep.h"
#include "algorithm"
int main() {
  int number_to_test =20000;
  std::cout<< "The number of 1's for N equal to " << number_to_test << " is " <<RecursiveBinary(number_to_test) << std::endl;
  int number_to_test2 =20001;
  std::cout<< "The number of 1's for N equal to " << number_to_test2 << " is " <<RecursiveBinary(number_to_test2) << std::endl;
  int number_to_test3 =20002;
  std::cout<< "The number of 1's for N equal to " << number_to_test3 << " is " <<RecursiveBinary(number_to_test3) << std::endl;
  int number_to_test4 =20003;
  std::cout<< "The number of 1's for N equal to " << number_to_test4 << " is " <<RecursiveBinary(number_to_test4) << std::endl;
  int number_to_test5 =20004;
  std::cout<< "The number of 1's for N equal to " << number_to_test5 << " is " <<RecursiveBinary(number_to_test5) << std::endl;
  int number_to_test6 =20005;
  std::cout<< "The number of 1's for N equal to " << number_to_test6 << " is " <<RecursiveBinary(number_to_test6) << std::endl;
  int number_to_test7 =20006;
  std::cout<< "The number of 1's for N equal to " << number_to_test7 << " is " <<RecursiveBinary(number_to_test7) << std::endl;
  int number_to_test8 =20007;
  std::cout<< "The number of 1's for N equal to " << number_to_test8 << " is " <<RecursiveBinary(number_to_test8) << std::endl;

  for ( auto x = 0 ; x < 100 ; x++){
    std::cout<< "The number of 1's for N equal to " << x << " is " <<RecursiveBinary(x) << std::endl;
  }



  return 0;
}