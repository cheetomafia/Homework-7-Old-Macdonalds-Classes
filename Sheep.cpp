#include "Sheep.h"
#include <ostream>
#include <iostream>
#include <string>

using namespace std;

Sheep::Sheep(string name, int age, int weight) : name(name), age(age), weight(weight){}

Sheep::Sheep(const Sheep& sheep) : name(sheep.name + " Clone"), age(sheep.age), weight(sheep.weight){}

std::ostream& operator<<(std::ostream& out, Sheep& sheep){
  out << "Name: " << sheep.name << endl;
  out << "Age: " << sheep.age << endl;
  out << "Weight: " << sheep.weight << " lbs" << endl;
  return out;
}

void Sheep::incrementAge(){
  age++;
}

string Sheep::getAnimalType(){
  return "Sheep";
}

const string Sheep::SAYS = "Baa!";
