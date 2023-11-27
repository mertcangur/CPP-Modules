#include "WrongAnimal.hpp"
#include "AAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();

    delete i;
    delete j;

    std::cout << "\n\n<------------------------------------------------------------------>\n\n" << std::endl;

    Dog basic;
    {
        Dog tmp = basic;
    }

    std::cout << "\n\n<------------------------------------------------------------------>\n\n" << std::endl;

    const AAnimal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
    for ( int i = 0; i < 4; i++ ) {
        delete animals[i];
    }

    //AAnimal anal;

    return 0;
}
