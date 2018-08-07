//
// Created by Greg LaKomski on 2/27/18.
//

#ifndef HOMEWORK5_CIRCQUEUE_H
#define HOMEWORK5_CIRCQUEUE_H

#include<iostream>
using std::cout;
using std::endl;

#include "linked_list.h"

class circQueue : public linked_list {

 private:
  linked_list *a;

 public:

  circQueue() {

    a = new linked_list;
  }
/********************************************************************************************************************************************/
// ~circQueue()
//
// Traverses the circular queue until the head points to tail
// using a temp node we set it to the node after head. Then
// set current head to null then delete it. Then set temp which
// was the node after the past head. Basically this algorithm
// deletes the entire queue one by one by moving the head.
//
//
/********************************************************************************************************************************************/
  ~circQueue() {
    auto tmp = new node;
    while (a->getHeadPointer() != a->getTailPointer()) {
      tmp = a->getHeadPointer()->next;
      a->setHeadPointer(NULL);
      delete a->getHeadPointer();
      a->setHeadPointer(tmp);
    }
    tmp = NULL;
    delete tmp;
  }
/********************************************************************************************************************************************/
// displayQueue()
//
// Checks if anything is in queue if not then print a message.
// Using a traversal node, we traverse the queue. Since the queue
// is circular tail points to head. Begin by printing out first
// item in queue using traversal_node then setting it to next item
// in line. While loop prints out every item and has a stop condidition
// of traversal == head. Since traversal is set to head->next before
// entering the loop then reaching head again would mean is has
// traversed the entire queue. Counter is there to avoid accessing memory
// we shouldnt be accessing
//
/********************************************************************************************************************************************/
  void displayQueue() {
    int counter = 0;
    if(a->getHeadPointer() == NULL) {
      cout << " Nothing in queue " << endl;
      counter++;
    }
    if(counter == 0) {
      node *traversal_node;
      traversal_node = a->getHeadPointer();
      cout << traversal_node->data << endl;
      traversal_node = traversal_node->next;
      while (traversal_node != a->getHeadPointer()) {
        cout << traversal_node->data << endl;
        traversal_node = traversal_node->next;
      }
    }
  }

  void enqueue(int value) {

    // uses the addnode function of linked list
    // then sets tail->next to head because it
    // is circular.

    a->add_node(value);
    a->getTailPointer()->next = a->getHeadPointer();
  }

  int dequeue() {
    int value;
    if (a->getHeadPointer() == NULL) {
      cout << (" tree is empty, returning 0") << endl;
      return 0;
    }

    // If head = tail then we know it is the last node
    // and only have to delete one. Save the data before
    // deleting then delete head. Since last item we can
    // set head and tail to NULL

    auto last_node_value = -1;
    if (a->getHeadPointer() == a->getTailPointer()) {
      last_node_value = a->getHeadPointer()->data;
      delete a->getHeadPointer();
      a->setTailPointer(NULL);
      a->setHeadPointer(NULL); }

    // If not last item we have to worry about re-arranging
    // pointers. Begin by saving data then setting a temp
    // node = head. Then using the setHeadPointer set the
    // node after current head to the new head. This allows
    // to delete the temp node that was the previous head
    // without worrying about de-linking the entire queue
    // We must also rearrange the tail pointer to point to
    // the new head.

    else {
      last_node_value = a->getHeadPointer()->data;
      auto del_node = a->getHeadPointer();
      a->setHeadPointer(a->getHeadPointer()->next);
      a->getTailPointer()->next = del_node->next;
      delete del_node; }

    return last_node_value;

  }
/********************************************************************************************************************************************/
// get_Front()
//
// returns:
// (int)                          - returns head data
/********************************************************************************************************************************************/
  int get_Front() {
    if (a->getHeadPointer() != NULL)
      return a->getHeadPointer()->data;
    return INT8_MIN;
  }
/********************************************************************************************************************************************/
// get_Last()
//
// returns:
// (int)                          - returns tail data
/********************************************************************************************************************************************/
  int get_Last() {
    if (a->getTailPointer() != NULL)
      return a->getTailPointer()->data;
    return INT8_MIN;
  }
};
#endif //HOMEWORK5_CIRCQUEUE_H
