#include<iostream>

class BaseClass{
public:
    virtual void method(){
        std::cout<<"Base Clasee method\n";
    }
};
class SubClass:public BaseClass{
    void method(){
        std::cout<<"Sub Class method\n";
    }
};
void method1(BaseClass &base){
    base.method();
}

int main(){
    BaseClass base;
    SubClass sub;
    method1(base);
    method1(sub);
    
}