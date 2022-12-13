# Homework-7-Old-Macdonalds-Classes
Homework 7
===
In this homework we are going to be building on our knowledge of classes. 
Some of the topics explored in this homework are, const members,
member initializers, static members/functions, copy constructor, and 
operator overloading for stream operators.

The example used here is just a silly implementation of a few 
objects meant represent farm animals (cow, sheep). 
The required implementation of these class will be a bit
repetitive and that is by design. In future homeworks we will
learn how to use inheritance and polymorphism to reuse code
and make this example efficient. But for now.... read below for requirements.

Requirements
===
Provided:
* You are provided the main function, do not modify.
* You are provided header files for Cow.h and Sheep.h, do not modify.

To Implement:
1. Create and implement Cow.cpp
2. Create and implement Sheep.cpp
3. You must implement ALL member functions provided by headers
4. Initialize static member variables as specified in the comments of the headers
5. Implement the overloaded << operators for Cow/Sheep (match output)
6. Implement Sheep Copy Constructor

Sheep Copy Constructor:

The copy constructor has been defined for the Sheep class. 
It must be overloaded. When overloading the Sheep copy constructor
append a space and the word "Clone" the existing Sheep's name.

Hints
===
1. Use ALL input arguments for overloaded << operator.
2. Treat ostream argument as you would use cout.
3. For copy constructor, call other constructor in member initializer.

Tests
===
Single test; all or nothing on this one!
