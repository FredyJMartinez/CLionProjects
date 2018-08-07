//
// Created by Greg LaKomski on 3/19/18.
//
// My default list of includes for contest coding

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

using std::cout;
using std::endl;

int main() {

  // input the number of cases
  int cases;

while(!(std::cin >> cases))
  {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
  }

  std::cin.ignore(); // gets rid of /n

  if(cases > 0) {

    std::vector<int> data;
    // for the number of cases
    for (int k = 0; k < cases; k++) {

      std::string line;
      int num;

      getline(std::cin, line);
      std::istringstream iss(line);
      while (iss >> num) {
        data.push_back(num);
      }
      // the rest of data is N speeds of creatures in m per s
      // scan the values in data looking for the maximum creature speed

     auto maxSpeed = *std::max_element(data.begin(), data.end());

      cout << "Case " << k + 1 << ":" << " " << maxSpeed << endl;

      data.clear();

    }

  }
  //return 0;
}