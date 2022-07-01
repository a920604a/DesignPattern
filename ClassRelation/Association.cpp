#include <iostream>
#include <list>
class Student;
class Teacher;
class Teacher
{
private:
    std::string name;
    std::list<Student> stus; // 成員變量

public:
    Teacher(std::string name) : name(name){};
    void append_student(std::string st);
    void teach();
    const std::string GetName() const;
};
class Student
{
private:
    std::string name;
    std::list<Teacher> teas; // 成員變量

public:
    Student(std::string name) : name(name){};
    void append_teacher(std::string t);
    void study();
    const std::string GetName() const;
};

void Student::append_teacher(std::string t)
{
    teas.push_back(Teacher(t));
}
void Student::study()
{
    for (Teacher teacher : teas)
    {
        std::cout << "Student " << this->name << " study from teacher:  " << teacher.GetName() << std::endl;
    }
}
const std::string Student::GetName() const { return name; }

void Teacher::append_student(std::string st)
{
    stus.push_back(Student(st));
}
void Teacher::teach()
{
    for (Student student : stus)
    {
        std::cout << "Teacher: " << Teacher::name << " teaches " << student.GetName() << std::endl;
    }
}
const std::string Teacher::GetName() const { return name; }
int main()
{
    Student student("Amy");
    student.append_teacher("Yoyo");
    student.append_teacher("Tim");
    student.study();

    Teacher teacher("Yoyo");
    teacher.append_student("Jason");
    teacher.append_student("Tim");
    teacher.teach();

    return 0;
}