#include <iostream>
#include <utility>
#include <string>
#include <vector>

using namespace std;
vector<pair<string,int>> AddStudent(pair<string,int>);
void use_input(string);

vector<pair<string, int>> AddStudent(pair<string, int>) {
  return vector<pair<string, int>>();
}

int main() {
 // vector<pair<string,int>> classroom;
  string one_input;
  string dog;
  string cat;
  auto size_of_vector = 0;
  cin >> size_of_vector;
  cout << size_of_vector << endl;
  //classroom.resize(size_of_vector);
  //for(int x = 0 ; x<1; x++){
    cin >> one_input >> dog >> cat;
   // cin >> dog;
    //4cin >> cat;
    cout << one_input << endl;
    cout << dog << endl;
    cout<< cat << endl;
  //}



  /*pair<string,int> a_student;
  int num_students = 0 ;
  string student_name = "";
  int day_of_birth;
  int month_of_birth;
  int year_of_birth;

  if(student_name.size()>15) {
  return -1;
  }
  if(num_students > 100 or num_students < 1 ) {
    return -1;
  }

  for(auto it = classroom.begin(); it != classroom.end() ; )
*/
  return 0;
}


