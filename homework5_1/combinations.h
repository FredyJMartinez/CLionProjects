//
// Created by Fredy on 2/28/2018.
//

#ifndef HOMEWORK5_1_COMBINATIONS_H
#define HOMEWORK5_1_COMBINATIONS_H

#include "vector"
#include "cmath"
#include "algorithm"
#include <stdio.h>

int NumOfOnesBinary(int N);
std::vector<std::vector<int>> combo(std::vector<int>, int, int);
std::vector<int> BinaryConversions(int, int);
std::vector<std::vector<int>> IndexesToCombo(std::vector<std::vector<int>>, std::vector<int>, int, int);
void Print(std::vector<std::vector<int>>);
int binomialCoeff(int, int); //Source : https://www.geeksforgeeks.org/space-and-time-efficient-binomial-coefficient/

/********************************************************************************************************************************************/
// combo()
//
// arguments:
// data (vector<int>)            - contains the sequence of numbers we want to find
//                                 combinations for
// r (int)                       - tells us the combination size
// n (int)                       - tells us the size of our vector
//
// returns:
// (vector<vector<int>>)         - holds all the combinations
//
//
// Assumes that n is the actual value size of the sequence
/********************************************************************************************************************************************/
std::vector<std::vector<int>> combo(std::vector<int> data, int r, int n) {

  std::vector<std::vector<int>> indexes_of_combo;
  std::vector<int> temp_vec{};

  // Four easy cases that we can "hard code" for :
  //
  // 1. Combinations of a size r > n is not possible
  // so we can return an empty vector
  //
  // 2. Combinations of size r = n is possible and
  // is simply the original sequence
  //
  // 3. Combinations of size r = 1 is possible and
  // is simply the original sequence's individual
  // numbers
  //
  // 4. Combinations of r < 0 is not possible
  // return empty vector of vectors

  if (r > n or r < 0) { return indexes_of_combo; }
  if (r == n) {
    for (auto it = data.begin(); it != data.end(); ++it) {
      temp_vec.push_back(*it);
    }
    indexes_of_combo.push_back(temp_vec);
    return indexes_of_combo;
  }
  if (r == 1) {
    for (auto it = data.begin(); it != data.end(); ++it) {
      temp_vec.push_back(*it);
      indexes_of_combo.push_back(temp_vec);
      temp_vec.clear();
    }
    return indexes_of_combo;
  }

  // Info :
  // Ex: data = {1,2,3,4,5}
  // All possible combinations of data can be found with binary numbers
  //
  //                              1 2 3 4 5
  //                              0 0 0 0 1
  //
  // This represents that 5 is "on" since there is a one in its index
  // thus the number 1 in binary would represent one of the combinations
  // for r = 1 and n = 5 for data. Since there are 5 inputs there are 2^n
  // possible combinations
  //
  // Algorithm :
  // Check each number up to 2^n, if there binary representation has r 1's
  // then it will be included in our combos. Push back decimal number into
  // temp_vec.
  //
  // Traverse temp_vec, each time changing the decimal number to binary and
  // then representing it as a vector and pushing it back into indexes_of_combo
  //
  // In the return we are calling IndexesToCombo which uses the indexes_of_combo
  // to present the combinations in the form of the original sequence

  int n_choose_k = binomialCoeff(n,r);
  int up_to_infin = 0 ;
  while(n_choose_k > 0)
 {
    if (NumOfOnesBinary(up_to_infin) == r) {
      temp_vec.push_back(up_to_infin);
      n_choose_k--;
    }
   up_to_infin ++;
  }

  for (auto it = temp_vec.begin(); it != temp_vec.end(); ++it) {
    indexes_of_combo.push_back(BinaryConversions(*it, n));
  } // work on binary conversions

  return IndexesToCombo(indexes_of_combo, data, n, r);
}
/********************************************************************************************************************************************/
// NumOfOnesBinary()
//
// arguments:
// num (int)                     - number for which we will count 1's in its binary representation
//
// returns:
// (int)                         - the number of ones in the binary representation of num
//
//
// Assumes that N is small enough to be held with a regular int type
/********************************************************************************************************************************************/
int NumOfOnesBinary(int num) {

  // Counts the number of 1's
  // in the binary representation
  // of num. Using the bitwise AND
  // from C

  int ones_counter = 0;
  while (num) {
    ones_counter += num & 1;
    num >>= 1;
  }
  return ones_counter;

}
/********************************************************************************************************************************************/
// BinaryConversions()
//
// arguments:
// num(int)                      - a binary number Ex: 10000, 00101, 101
// vector_size(int)              - the size vector, this is needed for this attack to work
//
// returns:
// (vector<int>)                 - changes presentation of binary number from int to vector
/********************************************************************************************************************************************/
std::vector<int> BinaryConversions(int num, int vector_size) {

  // Converts num, a binary representation of a decimal number
  // into a vector representation of the decimal number. Does this
  // digit by digit using modulus and division

  std::vector<int> bin_rep;

  while (num > 0) {
    bin_rep.push_back(num % 2);
    num /= 2;
  }
  while (bin_rep.size() < vector_size) {
    bin_rep.push_back(0);
  }
  std::reverse(bin_rep.begin(), bin_rep.end());
  return bin_rep;
}
/********************************************************************************************************************************************/
// IndexesToCombo()
//
// arguments:
// index(vector<vector<int>)     - holds all the indexes of combinations from our original sequence
// data(vector<int>)             - original sequence of numbers for which combos are being found
// r (int)                       - tells us the length of the combinations we want
// n (int)                       - tells us the size of our sequence
//
// returns:
// (vector<vector<int>)          - holds all the combinations we want
//
//
/********************************************************************************************************************************************/
std::vector<std::vector<int>> IndexesToCombo(std::vector<std::vector<int>> index, std::vector<int> data, int n, int r) {

  // Where the "magic" happens, converting the indexes (aka binary)
  // to combinations we want. Uses ones as a way to tell us what
  // index in data should be included. 1's represnt on while 0's
  // represent off. In 11000 we would want the first 2 numbers
  // from this we can infer that n = 5 and r = 2


  std::vector<std::vector<int>> combinations;
  combinations.resize(binomialCoeff(n, r));
  for (int i = 0; i < index.size(); i++) {
    for (int j = 0; j < index[i].size(); j++) {
      if (index[i][j] == 1) {
        combinations[i].push_back(data[j]);
      }
    }
  }
  return combinations;
}
void Print(std::vector<std::vector<int>> vector_to_print) {
  int counter = 0;
  for (int i = 0; i < vector_to_print.size(); i++) {
    for (int j = 0; j < vector_to_print[i].size(); j++) {
      std::cout << vector_to_print[i][j] << " ";
    }
    std::cout << std::endl;
    counter++;
  }
  std::cout << "Combinations :: " << counter << std::endl;
}
int binomialCoeff(int n, int k) {
  // Calculates n choose k

  int res = 1;

  // Since C(n, k) = C(n, n-k)
  if (k > n - k)
    k = n - k;

  // Calculate value of [n * (n-1) *---* (n-k+1)] / [k * (k-1) *----* 1]
  for (int i = 0; i < k; ++i) {
    res *= (n - i);
    res /= (i + 1);
  }

  return res;
}

#endif //HOMEWORK5_1_COMBINATIONS_H
