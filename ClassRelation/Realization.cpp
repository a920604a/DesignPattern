#include<iostream>
class Vehicle{
public:
    virtual void move() = 0;
};
class Car:public Vehicle{
public:
    void move(){
        std::cout<<"Car moves"<<std::endl;
    }
};
class Ship:public Vehicle{
public:
    void move(){
        std::cout<<"Ship moves"<<std::endl;
    }
};
int main(){
    Car car;
    car.move();
    Ship ship;
    ship.move();
    return 0;
}