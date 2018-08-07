#include <iostream>
int gcd(const int&, const int&);
int main() {

  std::cout<<gcd(130,0)<<std::endl;
  return 0;
}
// Returns the greatest common divisor of a and b.
 int gcd( const int & a, const int & b) {
  if( b == 0 ){
   return a;
  }
 else{
  return gcd( b, a % b );
 }
 }

