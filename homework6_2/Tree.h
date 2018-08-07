//
// Created by Greg LaKomski on 3/20/18.
//

#ifndef HOMEWORK6_TREE_H
#define HOMEWORK6_TREE_H


#include<utility>
#include<iostream>
#include <stdio.h>
#include <tuple>
#define COUNT 10
using std::cout;
using std::endl;


// Note the nested classes - look this up!
// I could have added parent pointers to make deletion more efficient
// The node class will have both the key and an associated value you can carry with. Should remind you of a MAP or SET.
class Tree {
 private:

  class Node {
   private:

    Node* left;
    Node* right;
    int key;
    int value;

   public:

    Node( int key, int value ) {
      this->key = key;
      this->value = value;
      this->left = NULL;
      this->right = NULL;
    }

    friend class Tree;
  };
  // Helper Function for insert
  Node * BSTInsert(Node* y, Node * head) {

    if (head == NULL) {
      head = y;
      y->left = NULL;
      y->right = NULL;}
    else{
      if(y->value < head->value){
        if(head->left != NULL){
          BSTInsert(y,head->left);}
        else{
          head->left = y;
          y->left = NULL;
          y->right = NULL;}}
      else if( y->value > head->value){
        if(head->right != NULL){
          BSTInsert(y,head->right);}
        else{
          head->right = y;
          y->left = NULL;
          y->right = NULL;
        }
      }
    }
    return head;
  }
  // Helper function for search
  void helperSearch(int key_search,Node* head,std::pair<bool, int>& search_data){
    search_data.second++;
    if( head!= NULL){
      if(key_search == head->key){
        search_data.first = true;
        return;
      }
      if(key_search < head->key){
        return helperSearch(key_search, head->left,search_data);
      }
      else{
        return helperSearch(key_search, head->right,search_data);
      }
    }
  }
  int helperHeight(Node *head) {
    if (head==NULL)
      return 0;
    else
    {
      /* compute the depth of each subtree */
      int left_side_height = helperHeight(head->left);
      int right_side_height = helperHeight(head->right);

      /* use the larger one */
      if (left_side_height > right_side_height)
        return(left_side_height+1);
      else return(right_side_height+1);
    }

  }
  //Helper function for printTree
  void printInOrder(Node * node,int format)
  {
    // Base case
    if (node == NULL)
      return;

    // Increase distance between levels
    format += COUNT;

    // Process right child first
    printInOrder(node->right, format);

    // Print current node after space
    // count
    printf("\n");
    for (int i = COUNT; i < format; i++)
      printf(" ");
    printf("%d\n", node->value);

    // Process left child
    printInOrder(node->left, format);

    // ............................. ADD CODE
  }
  // this is part of the Tree class
  Node * head;







 public:

  Tree() { head = NULL; }
  Node * createNode(int key, int value){
    Node * temp = new Node(key,value);
    return temp;
  }
  //Prints the keys for the tree in inorder mode
  // Helper function in private section
  void printTree(){
    printInOrder(this->head,0);
  }
  //Inserts a node into the tree
  // Helper function in private section
  void insert(const int key, const int value){
    Node * temp = new Node(key,value);
    this->head = BSTInsert(temp,this->head);
  }
  //finds a node with a specific key, returns TRUE or FALSE and the # of compares done. - a pair.
  // Helper function in private section
  std::pair<bool,int> searchNode(int key){
    std::pair<bool,int> temp;
    temp.first = false;
    temp.second = 0;
    helperSearch(key,this->head,temp);
    return temp;
    //................  Insert Code

  }
  std::tuple<int,int,int> heights(){
    std::tuple<int,int,int> heights;
    heights = std::make_tuple(helperHeight(this->head),helperHeight(this->head->left),helperHeight(this->head->right));
    return heights;
    //................. Insert code
  }
  Node * createNode(int key, int value, Node* left, Node* right){
    Node *temp = new Node(key,value);
    temp->left = left;
    temp->right = right;
    return temp;
  }






  // add create a node with key, value and both pointers//////done
  // add insert,search (should return TRUE and//////done
  // number of comparisons to find it or FALSE and number of camparisons) and height methods for the tree class
  // sounds like search should return a pair , yes?

};



#endif //HOMEWORK6_TREE_H