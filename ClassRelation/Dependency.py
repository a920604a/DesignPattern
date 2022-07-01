class Car:
    @staticmethod
    def run():
        print("Car is running")


class Driver:
    # 通過方法的參數
    def drive1(self, car):
        car.run()

    # 通過局部變數
    def drive2(self):
        Car().run()

    # 對静態方法的調用
    @staticmethod
    def drive3():
        Car.run()


if __name__ == "__main__":
    car = Car()
    Driver().drive1(car)
    Driver().drive2()
    Driver().drive3()
