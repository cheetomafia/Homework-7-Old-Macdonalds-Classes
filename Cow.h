#ifndef COW_H__
#define COW_H__
#include <ostream>
#include <string>

class Cow
{
    /**
     * Overloaded << operator, for Cow class as RHS of operator
     * friend allows for access to private member variables
     */
    friend std::ostream& operator<<(std::ostream& out, Cow& cow);

public:

    /**
     * Constructor
     * @param name - name of the cow
     * @param age - initial age of the cow
     * @param weight - initial weight of the cow
     */
    Cow(std::string name, int age, int weight);

    /**
     * Add 1 to the age
     */
    void incrementAge();

    /**
     * Set the weight
     * @param weight - new weight (lbs)
     */
    void setWeight(int weight);

    /**
     * Example usage of static function
     * @return "Cow"
     */
    static std::string getAnimalType();

    /**
     * For cow = "Moo!", set this in cpp file
     */
    static const std::string SAYS;

private:

    const std::string name;
    int age;
    int weight;
};

#endif
