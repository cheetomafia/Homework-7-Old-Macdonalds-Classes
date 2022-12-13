#include <iostream>
#include "Cow.h"
#include "Sheep.h"

using namespace std;

int main()
{
    cout << "Lets remember our farm animal noises!\n";
    cout << "A cow says: " << Cow::SAYS << endl;
    cout << "A sheep says: " << Sheep::SAYS << endl;
    cout << endl;

    // Lets create some farm animals
    Cow cow("Moolissa", 5, 1225);
    Sheep sheep("Dolly", 1, 125);

    cout << "Let see who is on the farm!\n";
    cout << "We have a " << Cow::getAnimalType() << endl;
    cout << cow;
    cout << endl;

    cout << "We have a " << Sheep::getAnimalType() << endl;
    cout << sheep;
    cout << endl;

    cout << "1 year passes. An the animals are getting older and fatter.\n";

    cow.incrementAge();
    cow.setWeight(1400);

    sheep.incrementAge();
    sheep.setWeight(140);

    cout << cow;
    cout << endl;

    cout << sheep;
    cout << endl;

    cout << "In the underground barn...\nOld MacDonald has been experimenting with cloning!\n";
    Sheep clone(sheep);

    cout << "Welcome to the farm a " << Sheep::getAnimalType() << " clone.\n";
    cout << clone;
}
