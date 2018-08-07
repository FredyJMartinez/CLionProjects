/**
 * @author Fredy Martinez
 * Collaborated with Gese Rocha, Jamal Rosool, and John Daloni
 */
#include "PhysVec.h"
//Basic constructor for creating a PhysVec Object
PhysVec::PhysVec() {
}
//PhysVec constructor that takes a vector argument
//Passes a vector reference which is copied into the
//member vector "a_vec_" using a initialization list
PhysVec::PhysVec(const std::vector<int> &input_vec) : a_vec_(input_vec) {

}
//PhysVec mutator : passes a vector refrence which is used
//to mutate a_vec_
void PhysVec::setPhysVec(const std::vector<int> &input_vec) {
  a_vec_ = input_vec;
}
//Accessor for a_vec_ 
std::vector<int> &PhysVec::get_a_vec_() {
  return a_vec_;
}
//Calculates dot product. Begins by creating a variable which
//will hold value and also creates a iterator which is linked
//to this a_vec_. The loop uses iterator traversal. Traversing
//through the passed PhysVec reference. For each "loop pass" the
//iterators are de-referenced then multiplied then stored into
//dot_product. Also added same exception handling as + operator.
int PhysVec::calculateDotProduct(const PhysVec &rhs) const {
  try {
    if (this->a_vec_.size() == rhs.a_vec_.size()) {
      auto dot_product = 0;
      auto iterator_this = this->a_vec_.begin();
      for (auto iterator_rhs = rhs.a_vec_.begin(); iterator_rhs != rhs.a_vec_.end(); ++iterator_rhs) {
        dot_product += *iterator_rhs * *iterator_this;
        iterator_this++;
      }
      return dot_product;
    } else throw ("Invalid. Vectors of different lengths can not have a dot product.");
  }
  catch (const char *msg) {
    std::cout << msg << std::endl;
  }
  return -1;
}
//Overloading of the = operator. Begins with a
//self assignment check. If passed then we create
//a iterator for this which is linked to the start
//of a_vec_. For loop uses iterator traversal using
//the passed PhysVec's a_vec_. Inside the loop we
//de-reference both iterators, what this is doing is
//setting this's a_vec_ element to the passed PhysVec
// a_vec_'s element.
PhysVec &PhysVec::operator=(const PhysVec &rhs) {
  if (this != &rhs) {
    if(this->a_vec_.size() != rhs.a_vec_.size()){
      int rhs_vec_size = rhs.a_vec_.size();
      this->a_vec_.resize(rhs_vec_size);
    }
    auto iterator_this = this->a_vec_.begin();
    for (auto iterator_rhs = rhs.a_vec_.begin(); iterator_rhs != rhs.a_vec_.end(); ++iterator_rhs) {
      *iterator_this = *iterator_rhs;
      iterator_this++;
    }
  }
  return *this;
}
//Copy constructor. Uses an already
//created object to make a new Physvec.
//Sets this's a_vec to the passed PhysVec's
// a_vec_
PhysVec::PhysVec(const PhysVec &rhs) {
  this->a_vec_ = rhs.a_vec_;
}
//Overloaded + operator is used to add PhysVec objects.
//New to exception handling, Inside our try statement
//we have a if else scenario. If both objects contain
//a_vec_ of equal size the operation proceeds else we
//throw a string. The catch statement catches the pointer
//to the first char in the string and prints out the
//string.If operation continues we create two iterator
//using auto we do not have to specify they are const.
//These iterators are linked to this's and rhs's a_vec_.
// We create a temp vector to store the sum of 2 a_vec_.
//Resizing as we need to, we can choose either this or
//rhs for the resize because we already checked that
//they were of equal size.After this we have iterator
//for loop traversal in which we de-reference prior
//iterators and add them into our temp vector. After
//loop finishes we create a temp PhysVec object using
//the constructor with the vector argument and passing
//the temp vector we created earlier. The temp PhysVec
//is then returned.
PhysVec PhysVec::operator+(const PhysVec &rhs) const {
  try {
    if (this->a_vec_.size() == rhs.a_vec_.size()) {

      auto iterator_rhs = rhs.a_vec_.begin();
      auto iterator_this = this->a_vec_.begin();

      std::vector<int> vector_c;

      unsigned long vector_sizes;
      vector_sizes = this->a_vec_.size();
      vector_c.resize(int(vector_sizes));

      for (auto iterator_temp = vector_c.begin(); iterator_temp != vector_c.end(); ++iterator_temp) {
        *iterator_temp = *iterator_this + *iterator_rhs;
        iterator_this++;
        iterator_rhs++;
      }
      PhysVec addition_storage(vector_c);
      return addition_storage;
    } else throw ("Invalid. Vectors of different lengths can not be added.");

  }
  catch (const char *msg) {
    std::cout << msg << std::endl;
  }
  return *this;
}
//Using iterator traversal to print.
//For loop links a iterator to this's
//a_vec_. During each pass the iterator
//is de-referenced and printed out.
void PhysVec::printVecs() const {
  for (auto vector_iterator = this->a_vec_.begin(); vector_iterator != this->a_vec_.end(); ++vector_iterator) {
    std::cout.flush() << *vector_iterator << " ";
  }
}
