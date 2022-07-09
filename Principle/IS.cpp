#include <iostream>
//改进
class Lifeform
{
public:
    virtual void eat() = 0;
    virtual void move() = 0;
};

class Flyable
{
public:
    virtual void fly() = 0;
};

class Audible
{
public:
    virtual void makeSound() = 0;
};

class Sparrow : public Lifeform, public Flyable, public Audible
{
public:
    //...
    void eat() { std::cout << "Sparrow eat" << std::endl; }
    void move() { std::cout << "Sparrow move" << std::endl; }
    void fly() { std::cout << "Sparrow fly" << std::endl; }
    void makeSound() { std::cout << "Sparrow makeSound" << std::endl; }
};

class Penguin : public Lifeform, public Audible
{
public:
    //...
    void eat() { std::cout << "Penguin eat" << std::endl; }
    void move() { std::cout << "Penguin move" << std::endl; }
    void makeSound() { std::cout << "Penguin makeSound" << std::endl; }
};
int main()
{
    Penguin penguin;
    penguin.eat();
    penguin.move();
    penguin.makeSound();
    Sparrow sparrow;
    sparrow.eat();
    sparrow.move();
    sparrow.makeSound();
    sparrow.fly();

    return 0;
}