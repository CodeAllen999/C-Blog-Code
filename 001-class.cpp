#include <stdio.h>

//ͨ��class�ؼ����ඨ����
class Student{
public:
    //������ı���
    char *name;
    int age;
    float score;
    //������ĺ���
    void say(){
        printf("%s�������� %d���ɼ��� %f\n", name, age, score);
    }
};

int main(){
    //ͨ�������������������������
    class Student stu1;  //Ҳ����ʡ�Թؼ���class
    //Ϊ��ĳ�Ա������ֵ
    stu1.name = "С��";
    stu1.age = 15;
    stu1.score = 92.5f;
    //������ĳ�Ա����
    stu1.say();
    stu1.say(); 

    return 0;
}
