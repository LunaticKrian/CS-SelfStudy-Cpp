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
    // 创建结构体数组：
    struct Student stuArray[3] = {
        {
            "krian",
            20,
            "stu2020210995"
            },
        {
                "krian",
                20,
                "stu2020210995"
        },
        {
                "krian",
                20,
                "stu2020210995"
        }
    };

/*
    // 循环输出结构体数组信息：
    for(int i = 0; i < 3; i++){
        std::cout << "学生信息：" << stuArray[i].stuNo << "\t" << stuArray[i].name << "\t" << stuArray[i].age << "\t" << std::endl;
    }
*/
    // 循环输出结构体数组信息：
    for(auto & i : stuArray){
        std::cout << "学生信息：" << i.stuNo << "\t" << i.name << "\t" << i.age << "\t" << std::endl;
    }

    return 0;
}