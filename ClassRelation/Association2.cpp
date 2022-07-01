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
    // 使用方法參數形式實現關聯，也有人認為是依賴
    void drive(Car car){
        car.run(); // 車不是我的，我只是個司機，別人給我什麼車我就開什麼車，我使用這個車。
    }
};
int main(){
    Driver driver;
    driver.drive();
    
    Car car;
    driver.drive(car);

    return 0;
}