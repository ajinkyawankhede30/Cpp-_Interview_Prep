#include "Object.h"

void Toy::AssembleParts() { std::cout << "Do nothing...\n"; }

Car::Car() { std::cout << "Car:{\n"; }
Car::~Car() { std::cout << "}~Car\n\n"; }
void Car::PrepareParts() {std::cout << "Preparing Car parts.\n"; }
void Car::AssembleParts() { std::cout << "Assembling Car parts. \n"; }
void Car::ApplyLable() { std::cout << "Applying lables on Car.\n"; name = "CAR"; price = 365.34; }
void Car::ShowProduct() { std::cout << "Name: " << name << "\nPrice: " << price << "\n"; }


Bike::Bike() { std::cout << "Bike:{\n"; }
Bike::~Bike() { std::cout << "}~Bike:\n\n"; }
void Bike::PrepareParts()  { std::cout << "Preparing Bike parts.\n"; }
void Bike::AssembleParts()  { std::cout << "Assembling Bike parts. \n"; }
void Bike::ApplyLable()  { std::cout << "Applying lables on Bike.\n"; name = "BIKE"; price = 400.34; }
void Bike::ShowProduct()   { std::cout << "Name: " << name << "\nPrice: " << price << "\n"; }


Truck::Truck() { std::cout << "Truck:{\n"; }
Truck::~Truck() { std::cout << "}~Truck:\n\n"; }
void Truck::PrepareParts()  { std::cout << "Preparing Truck parts.\n"; }
void Truck::AssembleParts()  { std::cout << "Assembling Truck parts. \n"; }
void Truck::ApplyLable()  { std::cout << "Applying lables on Truck.\n"; name = "TRUCK"; price = 854.34; }
void Truck::ShowProduct()   { std::cout << "Name: " << name << "\nPrice: " << price << "\n"; }

Doll::Doll() { std::cout << "Doll:{\n"; }
Doll::~Doll() { std::cout << "}~Doll:\n\n"; }
void Doll::PrepareParts() { std::cout << "Preparing Doll parts.\n"; }
//void Doll::AssembleParts() { std::cout << "Assembling Doll parts. \n"; }
void Doll::ApplyLable() { std::cout << "Applying lables on Doll.\n"; name = "DOLL"; price = 854.34; }
void Doll::ShowProduct() { std::cout << "Name: " << name << "\nPrice: " << price << "\n"; }