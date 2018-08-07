#include <iostream>
#include "combinations.h"
#include <chrono>
#include <ctime>
int main() {
/*
  std::vector<int> data{1, 2, 3, 4, 5};
  auto results = combo(data, 3, 5);

  Print(results);
  data.clear();

  data = {1};
  // Testing smallest valid N and R
  results = combo(data,1,1);
  Print(results);
  data.clear();

  data = {1,2,3,4,5};
  // Testing bad input - neg numbers
  results = combo(data, -1,5);

  for (int i = 0; i < 30 ; ++i) {
    data.push_back(i);
  }
  // Testing largest Valid N and R
  results = combo(data, 29,30);
  Print(results);
  data.clear();
*/
  std::vector<int> data;
  auto start = std::chrono::system_clock::now();
  for (int i = 0; i < 30 ; ++i) {
    data.push_back(i);
  }
  // Testing largest Valid N and R
  auto results = combo(data, 29,30);
  Print(results);
  data.clear();
  auto end = std::chrono::system_clock::now();

  std::chrono::duration<double> elapsed_seconds = end-start;
  std::time_t end_time = std::chrono::system_clock::to_time_t(end);

  std::cout << "finished computation at " << std::ctime(&end_time)
            << "elapsed time: " << elapsed_seconds.count() << "s\n";







  return 0;

}