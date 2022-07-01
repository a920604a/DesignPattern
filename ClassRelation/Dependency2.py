class Person:
    def play(self, deivce):
        # 通過方法的參數
        deivce.run()
        print("終於能打遊戲")
    

class Computer:
    def run(self):
        print("電腦已經打開,已經登入")


class Phone:
    def run(self):
        print("手機版英雄聯盟已登入")


if __name__ == "__main__":

    computer = Computer()
    phone = Phone()
    person = Person()
    person.play(computer)
    # 電腦已經打開,已經登入
    # 終於能打遊戲
    person.play(phone)
    # 手機版英雄聯盟已登入
    # 終於能打遊戲

