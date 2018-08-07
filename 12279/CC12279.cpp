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

  int N;
  int case_counter = 1;
  int emoogle_event = 0;
  std::vector<int> emoogle_events;

  while(scanf("%d",&N),N != 0){
    for(auto i = 0 ; i < N ; i++){
      std::cin >> emoogle_event;
      emoogle_events.push_back(emoogle_event);
    }
    int treats_given = std::count(emoogle_events.begin(),emoogle_events.end(),0);
    int treats_expected = N - treats_given;
    auto emoogle_balance = treats_expected - treats_given;
    std::cout<< "Case " << case_counter << ": " << emoogle_balance << std::endl;
    case_counter++;
    emoogle_events.clear();

  }

 // return 0;

}