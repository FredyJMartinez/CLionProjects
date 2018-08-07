#include <iostream>
#include<sstream>
#include <vector>
using namespace std;
std::string Comparisons (int x, int y,int a , int b);
std::string Comparisons(int x, int y,int a, int b) {
  if(x == a or y == b){
    return "divisa";
  }
  if(x < a){
    if(y < b){
      return "NE";
    }
  }
  if(x < a){
    if(y>b){
      return "SE";
    }
  }
  if(x > a){
    if(y < b){
      return "NO";
    }
  }
  if(x > a){
    if(y > b){
      return "SO";
    }
  }



  return "";
}
int main() {
  string answer;
  int a ;
  int b;
  int x_origin;
  int y_origin;
  char space;
  int cases;
  cin >> cases;
  vector<string> vec_answer;

  while(cases!= 0) {
    cin >> x_origin;
    cin >> y_origin;
    while (cases > 0) {
      if (std::cin >> a && // the first number
          std::cin.get(space) && space == ' ' && // followed by a space
          !std::isspace(std::cin.peek()) && // not more than one space
          std::cin >> b && // then the second number,
          std::cin.peek() == '\n')  // immediately followed by new line
      {
      }
      cases--;
      vec_answer.push_back(Comparisons(x_origin, y_origin, a, b));

    }
    cin >> cases;

  }
  for (auto i = vec_answer.begin(); i != vec_answer.end()-1; ++i) {
    cout << *i << endl;
  }
  cout << *(vec_answer.end()-1) << endl;
  return 0;
}