# 函数

## 函数的分文件编写：

### 分文件编写步骤：

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

## 函数模板：

模板函数作用：建立一个通用函数，其返回值类型和形参类型可以不具体制定，用一个虚拟的类型来代表。

#### 语法：

```cpp
template<typename T>

函数声明或定义
```

#### 解析：

- template:声明创建模板
- typename:后面的T表示一种抽象的数据类型，可以用class代替
- T:通用的数据类型，名称可以替换，通常是大写字母

```cpp
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
```

#### 注意事项：

- 自动类型推导，必须推导出一致的数据类型T，才可以使用
- 模板必须要确定出T的数据类型，才可以使用

### 普通函数和函数模板的区别：

- 普通函数调用时可以发生自动类型转换（隐式类型转换）
- 函数模板调用时，如果利用自动类型推导，不会发生隐式类型转换
- 如果利用显示指定类型的方式，可以发生隐式类型转换

### 普通函数和函数模板的调用规则：

- 如果函数模板和普通函数都可以实现，优先调用普通函数
- 可以通过空模板参数列表来强制调用函数模板
  - ``函数名<>() // 空模板参数列表`` 
- 函数模板可以发生重载
- 如果函数模板可以产生更好的匹配，优先调用函数模板

### 模板重载：

为了解决自定义数据类型无法正常使用模板，C++提供了模板重载，可以为这些特定的类型提供具体化的模板

- 具体化的模板可以解决自定义类型的通用化
- 学习模板主要是理解STL运行机制

## 类模板：

类模板作用：建立一个通用类，类中的成员数据类型可以不具体制定，用一个虚拟类型来代表

```cpp
template<class T>
类定义
```

#### 解析：

- template:声明创建模板
- class:后面的T表示一种抽象的数据类型，可以用typename代替
- T:通用的数据类型，名称可以替换，通常是大写字母

### 实例化类模板：

```cpp
#include <iostream>
#include <string>

// 定义一个类模板：
template<class typeName, class typeAge>
class Student{
public:
    Student(typeName name, typeAge age){
        this->name = name;
        this->age = age;
    }
    typeName name;
    typeAge age;

    void showInfo(){
        std::cout << "学生信息：" << this->name << "\t" << this->age << std::endl;
    }
};

int main(){
    // 实例化模板类：
    Student<std::string, int> student = Student<std::string, int>("krain", 20);

    student.showInfo();

    return 0;
}
```

#### 类模板中成员函数创建时机：

- 普通类中的成员函数一开始就可以创建
- 类模板中的成员函数在调用时才创建

#### 类模板对象做函数参数：

类模板实例化对象，作为函数参数传递

<strong>传递方式：</strong>

1. 指定传入的类型：之间显示对象的数据类型
2. 参数模板化：将对象中的参数变为模板进行
3. 整个类模板化：将这个对象类型模板化进行传递

https://www.bilibili.com/video/BV1et411b73Z?p=177&t=93.5






<hr>


# STL 标准模板库:

- STL（Standard Template Library，标准模板库）
- STL从广义上分为：容器（container）、算法（algorithm）、迭代器（iterator）
- 容器和算法之间通过迭代器进行无缝连接
- STL几乎所有代码都采用了模板类或者函数模板

## STL六大组件：

STL六大组件分别是：容器、算法、迭代器、仿函数、适配器（配接器）、空间配置器

- 容器：各种数据结构，如vector、list、deque、set、map等，用来存放数据
- 算法：各种常用的算法
- 迭代器：扮演了容器与算法之间的胶合剂
- 仿函数：行为类似函数，可以作为算法的某种策略
- 适配器：一种用来修饰容器或者仿函数或者迭代器接口
- 空间适配器：负责空间的配置与管理

### 容器：

STL容器就是将运用最广泛的一些数据结构实现出来。常用的数据结构：数组，链表，树，栈，队列，集合，映射表等

这些容器分为序列式容器和关联式容器两种：

- 序列式容器：强调值的排序，序列式容器中的每个元素均有固定的位置
- 关联式容器：二叉树结构，各元素之间没有严格的物理上的顺序关系

### 算法：
有限的步骤，解决逻辑或数学上的问题，这一门学科我们叫做算法（Algorithms）
算法分为：质变算法和非质变算法
- 质变算法：是指运算过程中会更改区间内的元素的内容。例如接贝，替换，删除等等
- 非质变算法：是指运算过程中不会更改区间内的元素内容，例如查找、计数、遍历、寻找极值等等

### 送代器：
提供一种方法，使之能够依序寻访某个容器所含的各个元素，而又无需暴露该容器的内部表示方式
每个容器都有自己专属的选代器。


## string容器：

- string时C++风格字符串，本质上是一个类
- string类内部封装了char*，管理这个字符串，是一个char*型容器

### string构造函数：

- ``string();``  构建一个空的字符串
- ``string(const char* s);``  使用字符串s初始化
- ``string(const string& str);``  使用一个string对象初始化另外一个string对象
- ``string(int n, char c);``  使用n个字符c初始化

https://www.bilibili.com/video/BV1et411b73Z?p=192&t=2.0

## Vector容器：

### 存放内置数据类型：

- 容器：vector
- 算法：for_each
- 迭代器：vector<int>::iterator

```cpp
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
```

### Vector存放自定义数据类型：

```cpp
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

// 自定义数据类型：
class Student{
public:
    std::string name;
    int age;

    Student(std::string name, int age){
        this->name = name;
        this->age = age;
    }

    void showInfo(){
        std::cout << "学生信息：" << this->name << "\t" << this->age << std::endl;
    }
};

// 定义容器的回调函数：
void showInfo(Student* student){
    // std::cout << "学生信息：" << (*student).name << "\t" << (*student).age << std::endl;

    // 调用函数：
    student->showInfo();
}


int main(){
    // 1.创建Vector容器：
    std::vector<Student*> vector;

    Student stu1("krian1", 21);
    Student stu2("krian2", 22);
    Student stu3("krian3", 23);
    Student stu4("krian4", 24);
    Student stu5("krian5", 25);

    // 2.向容器中添加数据：
    vector.push_back(&stu1);
    vector.push_back(&stu2);
    vector.push_back(&stu3);
    vector.push_back(&stu4);
    vector.push_back(&stu5);

    // 3.调用algorithm访问容器中的数据：
    std::for_each(vector.begin(), vector.end(), showInfo);

    return 0;
}
```


## deque容器：

### deque容器基本概念：

双端数组，可以对头端进行删除操作




## stack容器：



