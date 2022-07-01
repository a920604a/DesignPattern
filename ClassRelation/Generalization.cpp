#include<iostream>

class Person{
protected:
    std::string name;
    int age;
public:
    Person(std::string name, int age):name(name), age(age){};
    void move(){};
    void say(){};
};
class Student:public Person{
private:
    std::string studentNumber ;
public:
    Student(std::string studentNumber, std::string name, int age):studentNumber(studentNumber), Person(name, age){};
    void study(){
        std::cout<<"Student "<<name<<" id is "<<studentNumber<<" and age is "<<age<<std::endl;
    }
};
class Teacher:public Person{
private:
    std::string teacherNumber;
public:
    Teacher(std::string teacherNumber, std::string name, int age):teacherNumber(teacherNumber), Person(name, age){};
    void teach(){
        std::cout<<"Teacher "<<name<<" id is "<<teacherNumber<<" and age is "<<age<<std::endl;
    }
};
int main(){
    Teacher teacher("105522098", "Tim", 29);
    teacher.teach();
    Student student("101201504","Amy",12);
    student.study();
}