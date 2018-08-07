//
// Created by Fredy on 2/13/2018.
//

#ifndef HOMEWORK4_2_BINREP_H
#define HOMEWORK4_2_BINREP_H
int RecursiveBinary(int N) {
  //Inspired by slides "number of zeroes" code
  //Algorithm : checks if number is 0, if true
  //return 0. Else check if number is mod 2 is
  //equal to 1. If true return 1 and recursive
  //call the function with N divided by 2. If
  //number mod 2 does not equal 1 then recursive
  //call function with N divided by 2.
  //
  //Basically we are doing binary conversion through
  //division and checking for 1 in the same process.

  if (N == 0) {
    return 0;
  } else if (N > 0) {
    if (N % 2 == 1) {
      return 1 + RecursiveBinary(N/2);
    }
    return RecursiveBinary(N/2);
  }
}
#endif //HOMEWORK4_2_BINREP_H
