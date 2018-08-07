#include <iostream>
#include <vector>
#include "MinQueue.h"
int main() {
  MinQueue a;
  std::cout<< " Creating MinQueue object a and enqueuing values" << std::endl;

  a.enqueue(5);
  a.enqueue(4);
  a.enqueue(2);
  a.enqueue(6);
  a.enqueue(1);
  a.enqueue(3);
  a.enqueue(-2);
  a.displayQueue();

  std::cout << " The minimum value in the queue is : " << a.queueMin() << std::endl;

  MinQueue b;
  std::cout<< " Creating MinQueue object b  and enqueuing values -99 to 99" << std::endl;

  for (int i = -99; i < 99 ; ++i) {
    b.enqueue(i);
  }
  b.displayQueue();

  std::cout << " The minimum value in the queue is : " << b.queueMin() << std::endl;


  return 0;
}