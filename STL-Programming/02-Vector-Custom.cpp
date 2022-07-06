#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

// �Զ����������ͣ�
class Student{
public:
    std::string name;
    int age;

    Student(std::string name, int age){
        this->name = name;
        this->age = age;
    }

    void showInfo(){
        std::cout << "ѧ����Ϣ��" << this->name << "\t" << this->age << std::endl;
    }
};

// ���������Ļص�������
void showInfo(Student* student){
    // std::cout << "ѧ����Ϣ��" << (*student).name << "\t" << (*student).age << std::endl;

    // ���ú�����
    student->showInfo();
}


int main(){
    // 1.����Vector������
    std::vector<Student*> vector;

    Student stu1("krian1", 21);
    Student stu2("krian2", 22);
    Student stu3("krian3", 23);
    Student stu4("krian4", 24);
    Student stu5("krian5", 25);

    // 2.��������������ݣ�
    vector.push_back(&stu1);
    vector.push_back(&stu2);
    vector.push_back(&stu3);
    vector.push_back(&stu4);
    vector.push_back(&stu5);

    // 3.����algorithm���������е����ݣ�
    std::for_each(vector.begin(), vector.end(), showInfo);

    return 0;
}

