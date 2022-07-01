class Teacher:
    def __init__(self, name):
        self.__name = name
        self.__stus = list()

    def append_student(self, name: str):
        self.__stus.append(Student(name))

    def teach(self):
        for st in self.__stus:
            print(f"Teacher: {self.__name} teaches {st.name}")

    @property
    def name(self):
        return self.__name

class Student:

    def __init__(self, name):
        self.__name = name
        self.__teas = list()

    def append_teacher(self, name: str):
        self.__teas.append(Teacher(name))


    def study(self):
        for t in self.__teas:
            print(f"Student {self.__name} study from teacher:  {t.name}")

    @property
    def name(self):
        return self.__name


if __name__ == "__main__":
    student = Student("Amy")
    student.append_teacher("Yoyo")
    student.append_teacher("Tim")
    
    student.study()

    teacher = Teacher("Yoyo")
    teacher.append_student("Jason")
    teacher.append_student("Tim")
    teacher.teach()
