//
// Created by Fredy on 2/13/2018.
//

#include "Turbo.h"
Turbo::Turbo(int Cylinder, int Displacement) : Motor(Cylinder, Displacement){
}
Turbo::Turbo(int Cylinder, int Displacement, int Boost, int FuelOctane, int HorsePower, int Torque) : Motor(Cylinder,Displacement),Boost(Boost), FuelOctane(FuelOctane), HorsePower(HorsePower), Torque(Torque) {
}
