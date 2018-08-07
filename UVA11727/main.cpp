#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
 string answer;
  string a ;
  string b;
  string c;
  char space;

  int cases;
  cin >> cases;
  vector<string> salary_holder;
  vector<string> temp;




  while (cases > 0) {
    if (std::cin >> a && // the first number
        std::cin.get(space) && space == ' ' && // followed by a space
        !std::isspace(std::cin.peek()) && // not more than one space
        std::cin >> b && // then the second number,
        std::cin.get(space) && space == ' ' && // followed by a space
        !std::isspace(std::cin.peek()) && // not more than one space
        std::cin >> c && // then the second number,
        std::cin.peek() == '\n')// immediately followed by new line


    {
    }
    salary_holder.push_back(a);
    salary_holder.push_back(b);
    salary_holder.push_back(c);


    sort(salary_holder.begin(),salary_holder.end());
    temp.push_back(salary_holder[1]);
    cases--;
    salary_holder.clear();

  }



  return 0;

}