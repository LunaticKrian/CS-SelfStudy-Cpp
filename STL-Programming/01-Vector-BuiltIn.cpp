#include <iostream>

// 引入容器头文件：
#include <vector>
// 引入算法头文件(标准算法头文件)：
#include <algorithm>

// 预定义迭代器回调函数：(迭代器会获取到容器中的每一个元素，将这个元素作为参数传递到函数中，执行函数中预定义的操作)
void showInfo(int value){
    std::cout << value << std::endl;
}

int main(){
    // 1.创建一个Vector容器：
    std::vector<int> vector;

    // 2.向Vector容器中追加数据：
    vector.push_back(1);
    vector.push_back(2);
    vector.push_back(3);
    vector.push_back(4);
    vector.push_back(5);

    // 3.通过迭代器访问Vector中的数据：
    std::vector<int>::iterator itBegin = vector.begin();  // 获取迭代器的起始指针，指向容器的第一个元素
    std::vector<int>::iterator itEnd = vector.end();  //获取迭代器的结束指针，指向容器的最后一个元素的下一个位置

    // 4.使用algorithm遍历Vector容器：
    std::for_each(vector.begin(), vector.end(), showInfo);

    return 0;
}

