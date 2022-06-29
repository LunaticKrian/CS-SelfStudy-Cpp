//
// Created by krian on 2022/6/29.
//

#include <iostream>
#include <string>

// 定义结构体：
struct Student{
    std::string name;
    int age;
    std::string stuNo;
};

int main(){

    // 实例化一个结构体变量：
    struct Student stu = {"krain", 20, "stu2020210995"};

    // 通过指针指向结构体变量：
    struct Student * p = &stu;

    // 通过指针访问结构体变量中数据：
    std::cout << "学生信息：" << p->stuNo << "\t" << p->name << "\t" << p->age << std::endl;

    return 0;
}