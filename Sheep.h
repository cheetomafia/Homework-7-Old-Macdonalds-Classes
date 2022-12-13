#ifndef SHEEP_H__
#define SHEEP_H__
#include <ostream>
#include <string>

class Sheep
{
    /**
    * Overloaded << operator, for Sheep class as RHS of operator
    * friend allows for access to private member variables
    */
    friend std::ostream& operator<<(std::ostream& out, Sheep& sheep);

public:

    /**
     * Constructor
     * @param name - name of the sheep
     * @param age - initial age of the sheep
     * @param weight - initial weight of the sheep
     */
    Sheep(std::string name, int age, int weight);

    /**
     * Copy Constructor , Allow override of default copy constructor
     * @param sheep - sheep object to copy
     */
    Sheep(const Sheep& sheep);

    /**
     * Add 1 to the age
     */
    void incrementAge();

    /**
     * Set the weight
     * @param weight - new weight (lbs)
     */
    void setWeight(int weight)
    {
      this->weight = weight;
    }

    /**
     * Example usage of static function
     * @return "Sheep"
     */
    static std::string getAnimalType();

    /**
     * For sheep = "Baa!", set this in cpp file
     */
    static const std::string SAYS;

private:

    const std::string name;
    int age;
    int weight;
};

#endif
