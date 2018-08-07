#include <iostream>
#include <utility>      // std::pair, std::make_pair
#include <vector>
using namespace std;
int main() {
  int month_duration;
  double down_payment;
  double loan_amnt;
  int num_depreciation_rec;
  bool neg_duration;
  char space;
  int counter_ndr = num_depreciation_rec;
  int month;
  double depreciation_percentage;
  double car_worth;

  vector<pair<int, double>> pair_holder;

    if (std::cin >> month_duration && // the first number
        std::cin.get(space) && space == ' ' && // followed by a space
        !std::isspace(std::cin.peek()) && // not more than one space
        std::cin >> down_payment && // then the second number,
        std::cin.get(space) && space == ' ' && // followed by a space
        !std::isspace(std::cin.peek()) && // not more than one space
        std::cin >> loan_amnt && // then the third number,
        std::cin.get(space) && space == ' ' && // followed by a space
        !std::isspace(std::cin.peek()) && // not more than one space
        std::cin >> num_depreciation_rec && // then the fourth number,
        std::cin.peek() == '\n')// immediately followed by new line
    {
      car_worth += down_payment;
      car_worth += loan_amnt;
      counter_ndr = num_depreciation_rec;
      std::pair <int,double> a_depreciation_record; // default constructor
      pair_holder.resize(1);

      while (counter_ndr > 0 ){
        cin>>month;
        cin>>depreciation_percentage;
        a_depreciation_record.first = month;
        a_depreciation_record.second = depreciation_percentage;

        pair_holder.push_back(a_depreciation_record);
        counter_ndr--;
      }
    }
  car_worth -= car_worth*pair_holder[1].second;
  loan_amnt-=down_payment;
  int loop_counter = 2;
  int temp_counter = loop_counter;
  while (loan_amnt > car_worth){


      car_worth -= car_worth*pair_holder[loop_counter].second;
      loan_amnt-=down_payment;
      if(loop_counter != pair_holder[loop_counter + 1].first)
      {
        do{
          car_worth -= car_worth*pair_holder[loop_counter].second;
          loop_counter++;
        }while(loop_counter != pair_holder[temp_counter + 1].first);
      }
      loop_counter++;

    }









  return loop_counter-1;
}