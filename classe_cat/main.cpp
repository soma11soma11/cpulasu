/*Goal: practice creating and using classes.
 **Create a class called Cat.
 **Create the following members:
 **private members: name, breed, age
 **public members: setName, setBreed,setAge
 **getName, getBreed, getAge, printInfo*/

#include "main.hpp"

main()
{
    Cat cat1, cat2;
    cat1.setName("tarou");
    cat1.setBreed("kawaii");
    cat1.setAge(10);
    cat2.setName("zirou");
    cat2.setBreed("kawaikunai");
    cat2.setAge(12);
    
    cat1.printInfo();
    cout << "\n";
    cat2.printInfo();
}

