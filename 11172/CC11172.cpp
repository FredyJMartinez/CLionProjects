//
// Created by Fredy on 5/23/2018.
//
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
#include <stack>


int main() {
  int t;
  int left_side;
  int right_side;
  std::cin >> t;
    for(int x = t; t != 0 ; t--){
      std::cin >> left_side;
      std::cin >> right_side;
      if(left_side > right_side){
        std::cout<< ">" << std::endl;
      }
      if(left_side < right_side){
        std::cout<< "<" << std::endl;
      }
      if(left_side == right_side){
        std::cout<< "=" << std::endl;
      }
    }

 // return 0;
}
