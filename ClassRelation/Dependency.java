class Car{
    public static void run(){
        System.out.println("Car is running");
    }
}
class Driver{
    public void drive1(Car car){
        car.run();
    }
    public void drive2(){
        Car car = new Car();
        car.run();
    }
    public void drive3(){
        Car.run();
    }
}
public class Dependency{
    public static void main(String[] args){
        Car car = new Car();
        Driver driver = new Driver();
        driver.drive1(car);
        driver.drive2();
        driver.drive3();
    }
}