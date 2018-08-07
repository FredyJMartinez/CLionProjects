//
// Created by Fredy on 3/18/2018.
//

#ifndef HOMEWORK5_4_MINQUEUE_H
#define HOMEWORK5_4_MINQUEUE_H
#include "circQueue+copy.h"
#include <stack>
#include <utility>
#include <vector>
class MinQueue : public circQueue {
 private:

  std::stack<std::pair<int, int>> the_stack;
  std::pair<int, int> value_min_pair;
  circQueue the_queue;

 public:
/********************************************************************************************************************************************/
// queueMin()
// Begins by getting the front of the queue and assuming it is the
// least value (either way we have to go through entire queue).
// Modify the pair accordingly. Push the pair onto the stack.
// enqueue the value onto the circular queue. While queue is not
// empty dequeue and save the value. Then check if current min
// needs to be modified if not then enqueue the value we dequeued
// from this. If current min does need to be modified then modify
// and change the top of the stack's minimum value accordingly.
//
// The queue is just used to store all the values of this and we only
// create one pair and modify it when needed
//
// Note: I think I can do this without a queue at all.
//
//
//
// Assumes that the dequeue "flag" (INT8_MIN represents nothing is in the queue) I defined is not a value inside the actual queue
/********************************************************************************************************************************************/
  int queueMin() {
    int current_min = this->get_Front();
    value_min_pair.first = current_min;
    value_min_pair.second = current_min;
    the_stack.push(value_min_pair);
    the_queue.enqueue(current_min);
    while (this->get_Front() != INT8_MIN){
      auto dequeued_value = this->dequeue();
      if (current_min > dequeued_value) {
        current_min = dequeued_value;
        the_stack.top().second = current_min;
        the_queue.enqueue(current_min);
      }
      the_queue.enqueue(dequeued_value);
    }
    return the_stack.top().second;
  }
};
#endif //HOMEWORK5_4_MINQUEUE_H
