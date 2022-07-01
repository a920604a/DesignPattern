#include<iostream>
#include<list>
class Teacher{
private:
    std::string name;
public:
    Teacher(std::string name):name(name){};
    void teaching(){
        std::cout<<"Teacher name is"<<name<<std::endl;
    }
    std::string GetName(){
        return name;
    }
};
class School{
private:
    std::list<Teacher> teas;
public:
    void GetAllTeacher(){
        for(Teacher t:teas){
            std::cout<<t.GetName()<<" ";
        }
    }
    void RollIn(std::string name){
        teas.push_back(Teacher(name));
    }
};
int main(){
    School school;
    school.RollIn("Yoyo");
    school.RollIn("Tim");
    school.RollIn("Tom");
    school.GetAllTeacher();
}
