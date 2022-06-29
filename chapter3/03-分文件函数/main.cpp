//
// Created by krian on 2022/6/28.
//

// 引入自定义头文件：
#include "sum.h"
#include <iostream>

int main(){
    int a = 10;
    int b = 20;

    // 调用头文件中声明的函数：
    int result = sum(a, b);

    // 输出计算结果：
    std::cout << "计算结果：" << result << std::endl;
}







