#include<sstream>
#include<iostream>
#include<fstream>
#include<cmath>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<string>
#include<list>
#include<limits>
#include<fstream>
int main() {

  int test_cases_T;
  std::cin >> test_cases_T;
  int max = test_cases_T;

  int salary_1;
  int salary_2;
  int salary_3;
  std::vector<int> employee_salary;
  int counter = 1;
  for(test_cases_T; test_cases_T != 0 ; test_cases_T--){
    scanf("%d %d %d", &salary_1, &salary_2, &salary_3);
    employee_salary = {salary_1, salary_2, salary_3};
    sort(employee_salary.begin(), employee_salary.end());
    std::cout << "Case " << counter << ": " << employee_salary[1] << std::endl;
    employee_salary.clear();
    counter++;
  }
 // return 0;
}