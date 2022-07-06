#include <iostream>
#include <string>

// 定义一个类模板：
template<class typeName, class typeAge>
class Student{
public:
    Student(typeName name, typeAge age){
        this->name = name;
        this->age = age;
    }
    typeName name;
    typeAge age;

    void showInfo(){
        std::cout << "学生信息：" << this->name << "\t" << this->age << std::endl;
    }
};

int main(){
    // 实例化模板类：
    Student<std::string, int> student = Student<std::string, int>("krain", 20);

    student.showInfo();

    return 0;
}

