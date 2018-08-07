#include <algorithm>
#include <iostream>
#include <numeric>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include "Tree.h"

int main() {

  srand(time(NULL));

  Tree oak;
  int random_num;
  std::vector<int> random_number_vector;

  // insert 1,000 nodes into the binary search tree,
  // setting each node to contain a randomly generated
  // Integer with a value between 1 and 2,000.

  for (int i = 0; i < 1000 ; ++i) {
    random_num = rand() %2000+1;
    oak.insert(i,random_num);
  }

  int max_height;
  int left_height;
  int right_height;
  int minimum_comparisons;
  int maximum_comparisons;
  double average_comparisons;

  // Display the height of the tree
  // and the heights of the root
  // node’s left and right subtrees.

  std::tie(max_height,left_height,right_height) = oak.heights();
  std::cout << " Max Height of Tree     : " << max_height << std::endl;
  std::cout << " Left Sub-Tree Height   : " << left_height + 1 << std::endl;
  std::cout << " Right Sub-Tree Height  : " << right_height + 1 << std::endl;

  // Next, search for 1,000 randomly
  // generated values between 1 and 2,000.
  // Display and report the minimum, maximum,
  // and average number of comparisons performed
  // during the 1000 searches

  for (int i = 0; i < 1000 ; ++i) {
    random_num = rand() %2000+1;
    random_number_vector.push_back(oak.searchNode(random_num).second);
  }

  minimum_comparisons = *std::min_element(random_number_vector.begin(),random_number_vector.end());
  maximum_comparisons = *std::max_element(random_number_vector.begin(),random_number_vector.end());
  average_comparisons = std::accumulate( random_number_vector.begin(), random_number_vector.end(), 0.0)/ random_number_vector.size(); // oak.printTree();
  std::cout << " Min Number of Comparisons     : " << minimum_comparisons << std::endl;
  std::cout << " Max Number of Comparisons     : " << maximum_comparisons << std::endl;
  std::cout << " Avg Number of Comparisons     : " << average_comparisons << std::endl;
  return 0;
}