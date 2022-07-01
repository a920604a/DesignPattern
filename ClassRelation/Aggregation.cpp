#include<iostream>
class Car{
public:
    void run(){
        std::cout<<"Car is running"<<std::endl;
    }
};
class Driver{
private:
    Car mycar;
public:
    // 使用成員變量形式實現關聯
    void drive(){
        mycar.run(); // 車是我自己的車，我“擁有”這個車
    }
};
int main(){
    Driver driver;
    driver.drive();
    return 0;
}