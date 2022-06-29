//
// Created by krian on 2022/6/29.
//

#include <iostream>
#include <string>

// 定义一个类：
class Student{

// 公有属性：
public:
    // 属性：
    std::string name;
    std::string stuNo;

    // 行为：
    std::string showInfo(){
        std::string info = "学生信息：" + this->stuNo + " " + this->name;
        std::cout << this->stuNo << "\t" << this->name << std::endl;

        return info;
    }

    // 构造函数：
    Student(){
        // 这是一个构造函数：
        std::cout << "构造类对象！" << std::endl;
    }

    Student(std::string name, int age, std::string stuNo){
        this->name = name;
        this->age = age;
        this->stuNo = stuNo;
    }

    // 析构函数：
    ~Student(){
        // 这是一个析构函数：
        std::cout << "销毁类实例对象！" << std::endl;
    }

// 私有属性：
private:
    int age;
};


int main(){
    //实例化类：
    Student student = Student();

    return 0;
}







