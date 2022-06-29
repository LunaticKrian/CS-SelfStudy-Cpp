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

### 1.结构体的创建

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

### 2.结构体数组：

- 作用：将自定义的结构体数据放人数组中维护
- 语法  ``struct 结构体名 数组名[数组个数] = { {}，{}，{} ... }``

```cpp
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
```

### 3.结构体指针：

- 通过指针访问结构体中的成员
- 利用操作符 ``->`` 可以通过结构体指针访问结构体属性

```cpp
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
```

<hr>


## 面向对象编程：

### 1.封装：

- 将属性和行为作为一个整体
- 给属性和行为加以权限控制

#### 定义类语法：

```cpp
// 定义一个类：
class 类名{
    访问权限修饰符: 属性 / 行为
};
```

#### 访问权限：

- private：私有权限;类内可以访问;类外不可以访问;子类继承父类，子类不能访问父类的私有内容
- protected：保护权限;类内可以访问;类外不可以访问;子类继承父类，子类可以访问父类的保护内容
- public：公共权限;类内可以访问;类外可以访问;

#### struct和class的区别：

- struct默认访问为公共的
- class默认访问权限是私有的

#### 示例：

```cpp
#include <iostream>
#include <string>

// 定义一个类：
class Student{

// 共有属性：
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

// 私有属性：
private:
    int age;
};
```

#### 对象的初始化和清理：

对象的初始化和清理，这个两个函数将被自动调用。

- 构造函数：主要作用在于创建对象时为对象成员属性赋值，构造函数由编译器自动调用

构造函数语法：``类名(){}``

    1.构造函数，没有返回值也不写void
    2.函数名与类名相同
    3.构造函数没有参数，可能发生重载
    4.程序在调用对象时候会自动调用构造，无须手动调用，而且只会调用一次

- 析构函数：主要作用在于对象销毁前系统自动调用，执行一些清理工作

析构函数语法：``~类名() {}``

    1.析构函数，没有返回值也不写void
    2.函数名称与类名相同，在名称前面加上 ~ 
    3.构造函数可以有参数，因此可以发生重载
    4.程序在对象销毁前会自动调用析构函数，无须手动调用，而且只会调用一次

类中定义构造函数和析构函数：

```cpp
// 公有属性：
public:
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
```

#### 拷贝构造函数：

C++中拷贝构造函数调用时机通常有三种情况：

- 使用一个已经创建完毕的对象来初始化一个新对象
- 值传递的方式给函数参数传值
- 以值方式返回局部对象

https://www.bilibili.com/video/BV1et411b73Z?p=108&t=8.9







### 2.继承：





### 3.多态：



<hr>


## 模板：

- C++另外一种编程思想称为 泛型编程，主要使用的技术就是模板
- C++提供两种模板机制：函数模板 类模板

### 函数模板：

模板函数作用：建立一个通用函数，其返回值类型和形参类型可以不具体制定，用一个虚拟的类型来代表。

#### 语法：

```cpp
template<typename T>

函数声明或定义
```

- 



