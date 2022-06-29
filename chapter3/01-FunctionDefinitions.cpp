//
// Created by krian on 2022/6/28.
//

#include <iostream>
using namespace std;

// 函数的声明：
int sum(int a, int b);

int main(){
    cout << sum(10, 20) << endl;
}

// 对声明的函数进行具体实现：
int sum(int a, int b){
    int result = a + b;
    return result;
}

