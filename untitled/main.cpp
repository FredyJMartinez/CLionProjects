// A crazy mixed up program
#include <iostream>
int main(){
    int dog;
    dog = 4;
    int &cat = dog;
    cat = 5;
    std::cout<< dog;
    return 0;
}