#include <iostream>
class Bird
{
public:
	virtual~Bird() = default;
 
	virtual void fly()   = 0;
	virtual void eat()   = 0;
	virtual void run()   = 0;
	virtual void tweet() = 0;
};
 
class Sparrow :public Bird
{
public:
	virtual void fly(){
        std::cout << "Bird fly" << std::endl; 
	}
	void eat() override{
		std::cout << "Bird eat" << std::endl; 
	}
	void run() override{
		std::cout << "Bird run" << std::endl; 
	}
	void tweet() override{
		std::cout << "Bird tweet" << std::endl; 
	}
};
 
 
class Penguin : public Bird
{
public:
	void fly() override{
        std::cout << "Penguin fly" << std::endl; 
	}
};
int main()
{
    Penguin penguin;
    penguin.eat();
    penguin.run();
    penguin.tweet();
    penguin.fly();
    Sparrow sparrow;
    sparrow.eat();
    sparrow.run();
    sparrow.tweet();
    sparrow.fly();

    return 0;
}