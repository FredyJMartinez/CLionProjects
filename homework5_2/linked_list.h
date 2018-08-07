//
// Created by Greg LaKomski on 2/25/18.
//


#ifndef HOMEWORK5_LINKED_LIST_H
#define HOMEWORK5_LINKED_LIST_H

#include <iostream>
using std::cout;
using std::endl;




struct node {
  // this doesn’t have to be an int - think template  we will talk about in class
  int data;
  node *next;
};

class linked_list {
 private:
  node *head;
  node *tail;
 public:
  // constructor
  linked_list() : head(NULL), tail(NULL) {}

  // destructor
  ~linked_list(){
    node * tmp = new node;
    while(head != tail) {
      tmp = head->next;
      head = NULL;
      delete head;
      head = tmp;
    }
    tmp = NULL;
    delete tmp;
  }
/********************************************************************************************************************************************/
// linked_list()
//
// arguments:
// rhList (node*)                - head node of another linked list
//
// returns:
// (linked_list)                 - copy of entire rhList
/********************************************************************************************************************************************/
  linked_list(node *rhList) {

    // Create node and sets equal to rhList
    // traverse rhList, each time taking the
    // data and using addnode
    //
    node *tmp = rhList;
      while (tmp) {
        this->add_node(tmp->data);
        tmp = tmp->next;

      }
  }
/********************************************************************************************************************************************/
// &operator=()
//
// arguments:
// other (&linked_list)          - linked_list reference that we want to assign to this
//
// returns:
// const linked_list             - new linked_list that is a copy of the rhs linked_list
/********************************************************************************************************************************************/
  const linked_list &operator=(const linked_list &other) {
    // Begins with self-assignment check
    // Then empty the list if not empty
    // already. Traverses through other
    // adding nodes each time by accessing
    // other->data

    if (this != &other) {

      while (head != NULL) {
        delTop();
      }
      node *copy_node = other.head;
      while (copy_node) {
        add_node(copy_node->data);
        copy_node = copy_node->next;
      }
      //traverse the list, each time appending others stuff to this stuff
    }
    return *this;
  }

  void add_node(int n) {
    node *tmp = new node;
    tmp->data = n;
    tmp->next = NULL;

    if(head == NULL){
      head = tmp;
      tail = tmp;
    }else{
      tail->next = tmp;
      tail = tail->next;
    }
  }

  void display()
  {
    node *tmp;
    tmp = head;
    while (tmp != NULL) {
      std:: cout << tmp->data << std::endl;
      tmp = tmp->next;
    }
  }



  // recursive example
  void display(node * start) {
    if(start == NULL){
      cout << "NULL" << endl;
    }else{
      cout << start->data << endl;
      display(start->next);
    }
  }

  void after(node *z, int value) {
    if (z != NULL) {
      node *p = new node;
      p->data = value;
      p->next = z->next;
      z->next = p;
    }
  }

  void front(int n){
    node *tmp = new node;
    tmp -> data = n;
    tmp -> next = head;
    head = tmp;
  }

  // deletes a node after a specific node before_del
  void del (node *before_del) {
    // if the node before delete is pointing to NULL
    if (before_del->next == NULL) {
      cout << "Trying to delete past end!" << endl;
    } else{
      node *temp;
      temp = before_del->next;
      before_del->next = temp->next;
      //delete temp->data;
      delete temp;
    }
  }

  // deletes the top most node - the head node
  void delTop(){

    // if there are no nodes
    if(head == NULL){
      cout << "Empty, nothing to erase" << endl;
    }
    node* temp;
    // if there is only the head node left
    if(head == tail){
      // delete head->data;
      delete head;
    }else{  // more than one node
      temp = head;
      head = head->next;
      //delete temp ->data;
      delete temp;
    }

  }


  node * getHeadPointer(){
    return head;
  }

  void setHeadPointer(node * newHead){
    head = newHead;
  }

  node * getTailPointer(){
    return tail;
  }

  void setTailPointer(node * newTail){
    tail = newTail;
  }




};

#endif //HOMEWORK5_LINKED_LIST_H