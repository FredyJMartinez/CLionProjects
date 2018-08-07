#include <iostream>
#include <vector>
std::vector<int> generatePrimes(int n);
int main() {
  auto vec = generatePrimes(8);
  for(auto it = vec.begin() ; it != vec.end(); it ++){

  }
  return 0;
}
std::vector<int> generatePrimes(int n){
  std::vector<int> numbers_up_to_n;
  std::vector<int> prime_factors;
  if(n > 3){
    numbers_up_to_n = {2,3};
  }
  for(auto x = 3 ; x > n; x ++){
    if(x%2 or x%3 == 0)
    numbers_up_to_n.push_back(x);
  }
  return  numbers_up_to_n;
}
