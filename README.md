## 函数

### 函数的分文件编写：

#### 分文件编写步骤：

1. 创建后缀名``.h``的头文件
2. 创建后缀名``.cpp``的源文件
3. 在头文件中写函数的声明
4. 在源文件中写函数的具体定义

步骤一：创建头文件：

```cpp
// 头文件声明函数：
int sum(int a, int b);
```

步骤二：创建源文件：

```cpp
#include "sum.h"

// 对头文件中声明的函数进行实现：
int sum(int a, int b){
    return a + b;
}
```

步骤三：使用分文件函数：

```cpp
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
```

<hr>

## 指针




<hr>



## 结构体

### 结构体

结构体，属于用户自定义数据类型，允许用户存储不同的数据类型。

#### 结构体语法：

```cpp
// 创建结构体
struct Student{
    // 结构体成员列表
};
```

通过结构体创建变量方式：

- ``struct 结构体名 变量名``

```cpp
#include <string>
#include <iostream>

// 创建结构体
struct Student{
    // 结构体成员列表：
     std::string name;
     int age;
     std::string stuNo;
};

// main方法：
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
```  

- ``struct 结构体名 变量名 = { 成员值1, 成员值2, ... }``

```cpp
#include <string>
#include <iostream>

// 创建结构体
struct Student{
// 结构体成员列表：
std::string name;
int age;
std::string stuNo;
};

// main方法：
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
```

- ``定义结构体时顺便创建结构体变量``

```cpp
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
```
