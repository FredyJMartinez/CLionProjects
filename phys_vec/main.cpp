/**
 * @author Fredy Martinez
 * Collaborated with Gese Rocha, Jamal Rosool, and John Daloni
 */

#include <iostream>
#include "PhysVec.h"
#include <vector>
using std::cout;
using std::endl;

// This main is used to test the physvec class.  It will provide
// vectors for the class to use in its calculation's.
//

int main() {

  // create some vectors - Note c++ 11 uniform initilization!
  std::vector<int> lhs = {3, 2, 1};
  std::vector<int> rhs = {1, 2, 3};
  std::vector<int> newrhs = {4, 2, 1};
  std::vector<int> newlhs = {1, 2, 5};
  std::vector<int> emptyvec = {0, 0, 0};
  std::vector<int> loopvec;
  std::vector<int> oscillatingvec;
  std::vector<int> negativevec;
  loopvec.resize(200);
  oscillatingvec.resize(200);
  negativevec.resize(200);
  for (int counter = 0; counter < 200; counter++) {
    loopvec[counter] = counter;
    negativevec[counter] = counter * -1;
    if (counter % 2 == 0) {
      oscillatingvec[counter] = counter;

    } else {
      oscillatingvec[counter] = counter * -1;
    }
  }


  // use simple constructor and set
  cout << endl;
  cout << "****SIMPLE CONSTRUCTOR****" << endl;
  PhysVec myphysvec;
  cout << "Creating a PhysVec object ..." << endl;
  myphysvec.setPhysVec(newlhs);
  cout << "Using setPhysVec with a vector of size : " << newlhs.size() << endl;
  cout << "Printing out PhysVec : ";
  myphysvec.printVecs();
  cout << endl;
  cout << endl;
  PhysVec myloopvec;
  cout << "Creating a PhysVec object ..." << endl;
  myloopvec.setPhysVec(loopvec);
  cout << "Using setPhysVec with a vector of size : " << loopvec.size() << endl;
  cout << "Printing out PhysVec : ";
  myloopvec.printVecs();
  cout << endl;
  cout << endl;
  PhysVec mynegativevec;
  cout << "Creating a PhysVec object ..." << endl;
  mynegativevec.setPhysVec(negativevec);
  cout << "Using setPhysVec with a vector of size : " << negativevec.size() << endl;
  cout << "Printing out PhysVec : ";
  mynegativevec.printVecs();
  cout << endl;
  cout << endl;

  // use regular constructor
  cout << "****REGULAR CONSTRUCTOR****" << endl;
  PhysVec myphysvec2(newrhs);
  cout << "Creating a PhysVec object that contains a vector ..." << endl;
  cout << "Using accessor to read vectors size...vector contains size of : " << myphysvec2.get_a_vec_().size() << endl;
  cout << "Printing out PhysVec : ";
  myphysvec2.printVecs();
  cout << endl;
  cout << endl;
  PhysVec myloopvec2(loopvec);
  cout << "Creating a PhysVec object that contains a vector ..." << endl;
  cout << "Using accessor to read vectors size...vector contains size of : " << myloopvec2.get_a_vec_().size() << endl;
  cout << "Printing out PhysVec : ";
  myloopvec2.printVecs();
  cout << endl;
  cout << endl;
  PhysVec myoscillatingvec(oscillatingvec);
  cout << "Creating a PhysVec object that contains a vector ..." << endl;
  cout << "Using accessor to read vectors size...vector contains size of : " << myoscillatingvec.get_a_vec_().size()
       << endl;
  cout << "Printing out PhysVec : ";
  myoscillatingvec.printVecs();
  cout << endl;
  cout << endl;
  // test the overloading of the addition and the = operators
  cout << "****OVERLOADED OPERATORS****" << endl;
  PhysVec myphysvec3(emptyvec);
  cout << "The PhysVec's object vector has been emptied " << endl;
  myphysvec3.printVecs();
  cout << endl;
  cout << "Adding two PhysVec object together. " << endl;
  cout << "PhysVec A : ";
  myphysvec2.printVecs();
  cout << endl;
  cout << "PhysVec B : ";
  myphysvec.printVecs();
  cout << endl;
  cout << "PhysVec A + B : ";
  myphysvec3 = myphysvec2 + myphysvec;
  myphysvec3.printVecs();
  cout << endl;
  cout << endl;
  myphysvec3.setPhysVec(emptyvec);
  cout << "Adding two PhysVec object together. " << endl;
  cout << "PhysVec A : ";
  myphysvec2.printVecs();
  cout << endl;
  cout << "PhysVec B : ";
  myloopvec.printVecs();
  cout << endl;
  cout << "PhysVec A + B : ";
  myphysvec3 = myphysvec2 + myloopvec;
  cout << endl;
  myphysvec3.get_a_vec_().resize(200);
  cout << "Adding two PhysVec object together. " << endl;
  cout << "PhysVec A : ";
  myloopvec.printVecs();
  cout << endl;
  cout << "PhysVec B : ";
  mynegativevec.printVecs();
  cout << endl;
  cout << "PhysVec A + B : ";
  myphysvec3 = myloopvec + mynegativevec;
  myphysvec3.printVecs();
  cout << endl;
  cout << "Adding three PhysVec object together. " << endl;
  cout << "PhysVec A : ";
  myloopvec.printVecs();
  cout << endl;
  cout << "PhysVec B : ";
  myloopvec2.printVecs();
  cout << endl;
  cout << "PhysVec C : ";
  myoscillatingvec.printVecs();
  cout << endl;
  cout << "PhysVec A + B + C : ";
  myphysvec3 = myloopvec + myloopvec2 + myoscillatingvec;
  myphysvec3.printVecs();
  myphysvec3.setPhysVec(emptyvec);
  cout << endl;
  cout << endl;

  //test dot product
  cout << "****DOT PRODUCTS****" << endl;
  cout << "Testing dot prodcut on these 2 PhysVecs " << endl;
  cout << "Vector A : ";
  myphysvec2.printVecs();
  cout << endl;
  cout << "Vector B : ";
  myphysvec3.printVecs();
  cout << endl;
  int dotProduct = myphysvec2.calculateDotProduct(myphysvec3);
  cout << "Dot product is " << dotProduct << endl;
  cout << endl;
  cout << "Testing dot prodcut on these 2 PhysVecs " << endl;
  cout << "Vector A : ";
  myphysvec2.printVecs();
  cout << endl;
  cout << "Vector B : ";
  myphysvec.printVecs();
  cout << endl;
  int dotProduct1 = myphysvec2.calculateDotProduct(myphysvec2);
  cout << "Dot product is " << dotProduct1 << endl;
  cout << endl;
  cout << "Testing dot prodcut on these 2 PhysVecs " << endl;
  cout << "Vector A : ";
  myloopvec.printVecs();
  cout << endl;
  cout << "Vector B : ";
  myloopvec2.printVecs();
  cout << endl;
  int dotProduct2 = myloopvec.calculateDotProduct(myloopvec2);
  cout << "Dot product is " << dotProduct2 << endl;
  cout << endl;
  cout << "Testing dot prodcut on these 2 PhysVecs " << endl;
  cout << "Vector A : ";
  myphysvec2.printVecs();
  cout << endl;
  cout << "Vector B : ";
  myoscillatingvec.printVecs();
  cout << endl;
  int dotProduct3 = myphysvec2.calculateDotProduct(myoscillatingvec);
  cout << endl;
  cout << "Testing dot prodcut on these 2 PhysVecs " << endl;
  cout << "Vector A : ";
  myloopvec.printVecs();
  cout << endl;
  cout << "Vector B : ";
  myoscillatingvec.printVecs();
  cout << endl;
  int dotProduct4 = myloopvec.calculateDotProduct(myoscillatingvec);
  cout << "Dot product is " << dotProduct4 << endl;
  cout << endl;
  cout << "Testing dot prodcut on these 2 PhysVecs " << endl;
  cout << "Vector A : ";
  myloopvec.printVecs();
  cout << endl;
  cout << "Vector B : ";
  mynegativevec.printVecs();
  cout << endl;
  int dotProduct5 = myloopvec.calculateDotProduct(mynegativevec);
  cout << "Dot product is " << dotProduct5 << endl;
  cout << endl;

  //test copy constructor
  cout << "****COPY CONSTRUCTOR****" << endl;
  cout << "Creating new object using copy constructor..." << endl;
  cout << "PhysVec object to be copied contains vector : " << endl;
  myoscillatingvec.printVecs();
  PhysVec myphysvec4(myoscillatingvec);
  cout << endl;
  cout << "New PhysVec object created using copy constructor contains the following vector :  " << endl;
  myphysvec4.printVecs();
  cout << endl;
  cout << endl;
  cout << "Creating new object using copy constructor..." << endl;
  cout << "PhysVec object to be copied contains vector : " << endl;
  myloopvec.printVecs();
  PhysVec myphysvec5(myloopvec);
  cout << endl;
  cout << "New PhysVec object created using copy constructor contains the following vector :  " << endl;
  myphysvec5.printVecs();
  cout << endl;

  return 0;
}