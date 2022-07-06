#include <iostream>
#include <string>

// ����һ����ģ�壺
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
        std::cout << "ѧ����Ϣ��" << this->name << "\t" << this->age << std::endl;
    }
};

int main(){
    // ʵ����ģ���ࣺ
    Student<std::string, int> student = Student<std::string, int>("krain", 20);

    student.showInfo();

    return 0;
}

