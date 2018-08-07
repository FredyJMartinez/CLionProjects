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

int StringToInt(std::string);

int main() {

  int test_cases;

  std::string attempted_word;
  std::vector<std::string> exact_words {"three" , "two" , "one"};


  std::cin >> test_cases;

  for(test_cases; test_cases != 0 ; test_cases--){

    std::cin >> attempted_word;
    //if word is exact and kid did not mispell
    auto ptr_word = std::find(exact_words.begin(),exact_words.end(), attempted_word);
    if(exact_words.end()!= ptr_word){
      std::cout << StringToInt(*ptr_word) << std::endl; }
    //if word is mispelled
    else if(attempted_word.length() == 5){
      std::cout << 3 << std::endl; }
    else{
      int false_counter;
      if(attempted_word[0] != 'o')
      false_counter++;
      if(attempted_word[1] != 'n')
      false_counter++;
      if(attempted_word[2] != 'e')
      false_counter++;
      if(false_counter == 1){
        std::cout << 1 << std::endl;
        false_counter=0;}
      else{
        std::cout << 2 << std::endl;
        false_counter=0;}
  }
  }
  }

int StringToInt(std::string lh_word){
  if(lh_word == "one")
    return 1;
  if(lh_word == "two")
    return 2;
  if(lh_word == "three")
    return 3;
  return -1;
}