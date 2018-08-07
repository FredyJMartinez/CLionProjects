#include <iostream>
#include <chrono>
int DynamicFib(const int &n);
int RecursiveFib(const int &n);

int main() {

  auto start = std::chrono::high_resolution_clock::now();
  //const int TEN = 10;
  const int HUNDRED = 100;
  //const int THOUSAND = 1000;
  //std::cout<< "This is DYNAMIC FIB 10 " << DynamicFib(TEN) << std::endl;
  std::cout<< "This is DYNAMIC FIB 100 " << DynamicFib(HUNDRED) << std::endl;
  //std::cout<< "This is DYNAMIC FIB 1000 " << DynamicFib(THOUSAND) << std::endl;

 // std::cout<< "This is RECURSIVE FIB 10 " << RecursiveFib(TEN) << std::endl;
  //std::cout<< "This is RECURSIVE FIB 100 " << RecursiveFib(HUNDRED) << std::endl;
  //std::cout<< "This is RECURSIVE FIB 1000 " << RecursiveFib(THOUSAND) << std::endl;
  auto finish = std::chrono::high_resolution_clock::now();

  std::chrono::duration<double> elapsed = finish - start;

  std::cout << "Elapsed time:  " << elapsed.count()  << "s\n";

  return 0;

}
int DynamicFib(const int &n) {
  int fib_array [n+1];
  fib_array [0] = 0;
  fib_array [1] = 1;
  for( auto i = 2 ; i<=n ; i++){
    fib_array[i] = fib_array[i-1] + fib_array[i-2];
  }
  return fib_array[n];
}
int RecursiveFib(const int &n) {
  if (n <= 1)
    return n;
  return RecursiveFib(n-1) + RecursiveFib(n-2);
}
