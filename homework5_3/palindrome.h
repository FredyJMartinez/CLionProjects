//
// Created by Fredy on 3/17/2018.
//

#ifndef HOMEWORK5_3_PALINDROME_H
#define HOMEWORK5_3_PALINDROME_H
#include <queue>
#include <stack>
#include <utility>
#include <algorithm>
#include <string>

int palindrome(std::string inputString) {


  // Create a stack and queue that we will
  // use for the palindrome checking.

  std::stack<char> the_stack;
  std::queue<char> the_queue;

  // Iterator linked to inputString
  auto it = inputString.begin();


  // Using a for each loop traverse the inputString. My lamda function
  // captures each char by reference ([&] - by reference capture)
  // and pushes captured variable onto queue and stack.

  auto lamda_function = [&](char &){
    the_queue.push(*it);
    the_stack.push(*it);
    it++;
  };

  std::for_each(it, inputString.end(),lamda_function );

  // Using normal for loop I traverse the string and do the palindrome checking
  // check if front of queue = top if so move to next char by popping

  for (auto travel_it = inputString.begin(); travel_it != inputString.end(); ++travel_it) {
    if (the_queue.front() == the_stack.top()) {
      the_queue.pop();
      the_stack.pop();
    }
    if (the_queue.empty() and the_stack.empty()) {
      return 1;
    }
  }

  return 0;
}

#endif //HOMEWORK5_3_PALINDROME_H
