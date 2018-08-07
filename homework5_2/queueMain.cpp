//
// Created by Greg LaKomski on 2/28/18.
//


#include<iostream>
#include"circQueue+copy.h"
using std::cout;
using std::endl;

int main() {

  linked_list* number_line = new linked_list;
  linked_list* backward_num_line ;

  //Testing add_node
  for (int i = 0; i < 9; ++i) {
    number_line->add_node(i);
  }
  std::cout<< " Creating a linked_list number_line with values " << number_line->getHeadPointer()->data << " to " << number_line->getTailPointer()->data << std::endl;
  number_line->display();
  number_line->~linked_list();
  cout << 'c' << endl;
  number_line->display();

/*
  for (int x = 8; x >0; --x) {
    backward_num_line->add_node(x);
  }
  std::cout<< " Creating a linked_list backward_num_line with values " << backward_num_line->getHeadPointer()->data << " to " << backward_num_line->getTailPointer()->data << std::endl;
  backward_num_line->display();
  //Testing copy constructor
  linked_list* copy_list (number_line);
  std::cout<< " Using the linked_list copy construct to create a new linked_list copy_list with number_line " << std::endl;
  copy_list->display();
  //Testing overloaded = operator
  std::cout<< " Using the linked_list overloaded = operator with backward_num_line as lhs and number_line as rhs " << std::endl;
  backward_num_line = number_line;
  backward_num_line->display();


  //Testing CircQueue Class
  std::cout<< " Creating a circQueue object and enqueue data into it" << std::endl;

  circQueue s;

  s.enqueue(5);
  s.enqueue(6);
  s.enqueue(7);
  s.enqueue(8);

  s.displayQueue();
  auto front = s.get_Front();
  auto rear = s.get_Last();
  cout << " Front  " << front  << endl;
  cout << " Rear   " << rear   << endl;
  std::cout<< " DEQUEUE " << std::endl;

  int result = s.dequeue();
  cout << " result " << result << endl;

  result = s.dequeue();
  cout << " result " << result << endl;

  result = s.dequeue();
  cout << " result " << result << endl;
  result = s.dequeue();
  cout << " result " << result << endl;

  result = s.dequeue();
  cout << " result " << result << endl;

  s.displayQueue();
  std::cout<< " Enqueueing data again into circQueue object" << std::endl;

  s.enqueue(5);
  s.enqueue(4);
  s.enqueue(4);

  s.displayQueue();
  std::cout<< " DEQUEUE " << std::endl;

  result = s.dequeue();
  cout << " result " << result << endl;
  result = s.dequeue();
  cout << " result " << result << endl;
  result = s.dequeue();
  cout << " result " << result << endl;
  result = s.dequeue();
  cout << " result " << result << endl;
  s.displayQueue();


  */
  return 0;

}
