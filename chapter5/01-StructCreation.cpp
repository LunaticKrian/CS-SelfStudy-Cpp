//
// Created by krian on 2022/6/28.
//

#include <string>
#include <iostream>

// 创建结构体
struct Student{
    // 结构体成员列表：
     std::string name;
     int age;
     std::string stuNo;
} stu; // 声明结构体时创建结构体变量

// main方法：
int main(){

    // 对声明时创建的结构体变量赋值：
    stu.name = "krian";
    stu.age = 20;
    stu.stuNo = "stu202021095";

    // 控制台数输出学生信息：
    std::cout << "学生信息：" << stu.stuNo << "\t" << stu.name << "\t" << stu.age << std::endl;

    return 0;
}

// main方法：
/*
int main(){

    // 创建具体结构体：
    struct Student stu;

    // 通过上面这样的方式创建结构体需要给成员列表赋值：
    stu.name = "krian";
    stu.age = 20;
    stu.stuNo = "stu2020210995";

    // 控制台数输出学生信息：
    std::cout << "学生信息：" << stu.stuNo << "\t" << stu.name << "\t" << stu.age << std::endl;

    return 0;
}
*/

/*
int main(){
    // 创建结构体：
    struct Student stu = {
            "krian",
            20,
            "stu2020210995"
    };

    // 输出学生信息：
    std::cout << "学生信息：" << stu.stuNo << "\t" << stu.name << "\t" << stu.age << std::endl;

    return 0;
}
*/


