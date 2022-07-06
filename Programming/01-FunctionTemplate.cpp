#include <iostream>

// ����ģ�壺
template<typename T>  // T��һ��ͨ�õ���������
void changeValue(T &t1, T &t2){
    T temp;
    temp = t1;
    t1 = t2;
    t2 = temp;
}

int main(){
    int a = 1;
    int b = 2;

    // 1.�Զ������Ƶ���
    changeValue(a, b);
    std::cout << "a��ֵ��" << a << "\t" << "b��ֵ��" << b << std::endl;

    // 2.��ʾָ�����ͣ�
    changeValue<int>(a, b);
    std::cout << "a��ֵ��" << a << "\t" << "b��ֵ��" << b << std::endl;

    return 0;
}