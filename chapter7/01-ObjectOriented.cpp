//
// Created by krian on 2022/6/29.
//

#include <iostream>
#include <string>

// ����һ���ࣺ
class Student{

// �������ԣ�
public:
    // ���ԣ�
    std::string name;
    std::string stuNo;

    // ��Ϊ��
    std::string showInfo(){
        std::string info = "ѧ����Ϣ��" + this->stuNo + " " + this->name;
        std::cout << this->stuNo << "\t" << this->name << std::endl;

        return info;
    }

    // ���캯����
    Student(){
        // ����һ�����캯����
        std::cout << "���������" << std::endl;
    }

    Student(std::string name, int age, std::string stuNo){
        this->name = name;
        this->age = age;
        this->stuNo = stuNo;
    }

    // ����������
    ~Student(){
        // ����һ������������
        std::cout << "������ʵ������" << std::endl;
    }

// ˽�����ԣ�
private:
    int age;
};


int main(){
    //ʵ�����ࣺ
    Student student = Student();

    return 0;
}







