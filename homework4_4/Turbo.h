//
// Created by Fredy on 2/13/2018.
//

#ifndef HOMEWORK4_4_TURBO_H
#define HOMEWORK4_4_TURBO_H
#include "Motor.h"
class Turbo : public Motor{
 private:
  int Boost;
  int FuelOctane;
  int HorsePower;
  int Torque;

 public:
  Turbo(int Cylinder, int Displacement);
  Turbo(int Cylinder, int Displacement , int Boost, int FuelOctane , int HorsePower , int Torque );
};
#endif //HOMEWORK4_4_TURBO_H
