#include <iostream>
#include<sstream>

using namespace std;
char Comparisons (int a , int b);
char Comparisons(int a, int b) {
  if(a > b){
    return '>';
  }
  if(a < b){
    return '<';
  }

  if(a = b){
    return '=';
  }

return '0';
}
int main() {
  string answer;
  int a ;
  int b;
  char space;
  int cases;
  int counter = cases;
  cin >> cases;
  while(cases > 0){
  if( std::cin >> a && // the first number
      std::cin.get(space) && space == ' ' && // followed by a space
      !std::isspace( std::cin.peek() ) && // not more than one space
      std::cin >> b && // then the second number,
      std::cin.peek() == '\n' )  // immediately followed by new line
  {
  }
    cases--;
    cout<<Comparisons(a,b)<<endl;

  }



  return 0;
}