#include<iostream>
#include<list>
class Mouth{
public:
    void eat(){
        std::cout<<"eat"<<std::endl;
    }
};
class Head{
private:
    Mouth mouth;
public:
    Head(){
        mouth = Mouth();
    }
    void eat(){
        mouth.eat();
    }

};
int main(){
    Head head;
    head.eat();
    
}