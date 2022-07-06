#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

// 自定义数据类型：
class Student{
public:
    std::string name;
    int age;

    Student(std::string name, int age){
        this->name = name;
        this->age = age;
    }

    void showInfo(){
        std::cout << "学生信息：" << this->name << "\t" << this->age << std::endl;
    }
};

// 定义容器的回调函数：
void showInfo(Student* student){
    // std::cout << "学生信息：" << (*student).name << "\t" << (*student).age << std::endl;

    // 调用函数：
    student->showInfo();
}


int main(){
    // 1.创建Vector容器：
    std::vector<Student*> vector;

    Student stu1("krian1", 21);
    Student stu2("krian2", 22);
    Student stu3("krian3", 23);
    Student stu4("krian4", 24);
    Student stu5("krian5", 25);

    // 2.向容器中添加数据：
    vector.push_back(&stu1);
    vector.push_back(&stu2);
    vector.push_back(&stu3);
    vector.push_back(&stu4);
    vector.push_back(&stu5);

    // 3.调用algorithm访问容器中的数据：
    std::for_each(vector.begin(), vector.end(), showInfo);

    return 0;
}

