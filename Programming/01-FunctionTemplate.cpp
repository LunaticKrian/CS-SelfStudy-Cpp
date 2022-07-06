#include <iostream>

// 函数模板：
template<typename T>  // T是一个通用的数据类型
void changeValue(T &t1, T &t2){
    T temp;
    temp = t1;
    t1 = t2;
    t2 = temp;
}

int main(){
    int a = 1;
    int b = 2;

    // 1.自动类型推导：
    changeValue(a, b);
    std::cout << "a的值：" << a << "\t" << "b的值：" << b << std::endl;

    // 2.显示指定类型：
    changeValue<int>(a, b);
    std::cout << "a的值：" << a << "\t" << "b的值：" << b << std::endl;

    return 0;
}