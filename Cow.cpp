#include "Cow.h"
#include <iostream>
#include <ostream>
#include <string>

using namespace std;

Cow::Cow(string name, int age, int weight)
    : name(name), age(age), weight(weight) {}

// Cow::Cow(const Cow& cow) : name(cow.name), age(cow.age), weight(cow.weight){}

std::ostream& operator<<(std::ostream& out, Cow& cow){
  out << "Name: " << cow.name << endl;
  out << "Age: " << cow.age << endl;
  out << "Weight: " << cow.weight << " lbs" << endl;
  return out;
}

/*Sheep::Sheep(const Sheep& sheep) : name(sheep.name + " Clone"), age(sheep.age),
weight(sheep.weight){}

std::ostream& operator<<(std::ostream& out, Sheep& sheep){
  out << "Name: " << sheep.name << endl;
  out << "Age: " << sheep.age << endl;
  out << "Weight: " << sheep.weight << "lbs" << endl;
  return out;
}*/

void Cow::setWeight(int weight){
  this->weight = weight;
}


void Cow::incrementAge() { 
  age++; 
  }

string Cow::getAnimalType() { 
  return "Cow"; 
  }

const string Cow::SAYS = "Moo!";
