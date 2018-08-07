#include <iostream>
#include "palindrome.h"
int main() {

  std::string input("abcba");
  auto output = palindrome(input);
  if(output == 0){
      std::cout << "This is not a palindrome" << std::endl;}
  else {
      std::cout<< "This is a palindrome"<< std::endl;}

  std::string input2("racecar");
  auto output2 = palindrome(input2);
  if(output2 == 0){
    std::cout << "This is not a palindrome" << std::endl;}
  else {
    std::cout<< "This is a palindrome"<< std::endl;}

  std::string input3("                 ");
  auto output3 = palindrome(input3);
  if(output3 == 0){
    std::cout << "This is not a palindrome" << std::endl;}
  else {
    std::cout<< "This is a palindrome"<< std::endl;}

  std::string input4("asdfa");
  auto output4 = palindrome(input4);
  if(output4 == 0){
    std::cout << "This is not a palindrome" << std::endl;}
  else {
    std::cout<< "This is a palindrome"<< std::endl;}

  std::string input5("asdfaadfasdfasdfasdfasfasdfasfasfasdfeasvasdvgadsfsadfsdcadsc");
  auto output5 = palindrome(input5);
  if(output5 == 0){
    std::cout << "This is not a palindrome" << std::endl;}
  else {
    std::cout<< "This is a palindrome"<< std::endl;}

  return 0;
}