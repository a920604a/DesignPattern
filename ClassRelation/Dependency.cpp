#include<iostream>
class Car{
    public:
        static void run(){
            std::cout<<"Car is running"<<std::endl;
        }
};
class Driver{
public:
    // B作為A的成員函數參數
    void drive1(Car car){
        car.run();
    }
    // B作為A的成員函數的局部變量
    void drive2(){
        Car car ;
        car.run();
    }
    // A的成員函數調用B的靜態方法
    void drive3(){
        Car::run();
    }
};
int main(){
    Car car;
    Driver().drive1(car);
    Driver().drive2();
    Driver().drive3();
    return 0;
}