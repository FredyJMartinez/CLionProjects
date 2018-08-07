//
// Created by Fredy on 5/23/2018.
//
#include <sstream>
#include <iostream>
#include <fstream>
#include <cmath>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <string>
#include <list>
#include <limits>
#include <fstream>
#include <numeric>
#include <stack>

int main() {

  int test_cases;
  int number_of_stores;
  int a_position;
  int starting_pos;
  int total_walk;
  int optimal_walk;
  std::vector<int> postions_on_LS;

  std::cin >> test_cases;
  for (int t = test_cases; t != 0 ; t--) {
    std::cin >> number_of_stores;
    for (int n = number_of_stores ; n != 0 ; n--) {
      std::cin >> a_position;
      postions_on_LS.push_back(a_position);
    }
    std::sort(postions_on_LS.begin(),postions_on_LS.end());
    for (int i = 0; i < postions_on_LS.size()-1 ; i++) {
      optimal_walk += postions_on_LS[i+1] - postions_on_LS[i];
    }
    postions_on_LS.clear();
    std::cout << 2*optimal_walk << std::endl;
    optimal_walk = 0;
  }


  // return 0;
}
