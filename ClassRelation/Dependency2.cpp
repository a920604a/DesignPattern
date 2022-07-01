#include <iostream>
class MobilePhone
{
public:
    void transfer()
    {
        std::cout << "語音傳送" << std::endl;
    }
};
class Person
{
private:
    std::string name;
public:
    // 方法的參數
    void call(MobilePhone mp)
    {
        mp.transfer();
    }
};
int main(){
    MobilePhone mp;
    Person().call(mp);	
    return 0;
}
