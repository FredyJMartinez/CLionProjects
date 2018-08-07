#include<iostream>
#include<string>
#include<sstream>
#include <utility>
#include <algorithm>
using namespace std;

int main() {
  int pancake_stack[30]; // making max stack of pancakes
  int counter, aux, biggest_pancake, index;
  string s;
  while (getline(cin, s)) {
    counter = 0;
    istringstream is(s);
    cout << s << endl;
    while (is >> aux)
      pancake_stack[counter++] = aux;
    for (int i = counter - 1; i >= 0; i--) {
      biggest_pancake = -1;
      for (int j = 0; j <= i; j++)
        if (biggest_pancake <= pancake_stack[j]) {
          biggest_pancake = pancake_stack[j];
          index = j;
        }
      if (index != i) {
        if (index != 0) {
          cout << counter - index << " ";
          for (int j = 0; j <= index / 2; j++) swap(pancake_stack[j], pancake_stack[index - j]);
        }
        cout << counter - i << " ";
        for (int j = 0; j <= i / 2; j++) swap(pancake_stack[j], pancake_stack[i - j]);
      }
    }
    cout << 0 << endl;
  }
  return 0;
}