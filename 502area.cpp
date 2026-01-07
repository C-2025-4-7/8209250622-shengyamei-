#ifndef STUDENT_H
#define STUDENT_H
class Student            
{
public:
    void display(); 
    void set_value(int n, const char* na, char s); 
private:
    int num;
    char name[20];
    char sex;
};
#endif
#include <iostream>
#include <cstring>  
using namespace std;
void Student::display()
{
    cout << "num：" << num << endl;
    cout << "name：" << name << endl;
    cout << "sex：" << sex << endl;
}
void Student::set_value(int n, const char* na, char s)
{
    num = n;
    strcpy(name, na);  
    sex = s;
}
#include <iostream>
using namespace std;
int main()
{
    Student stud, stud1;
    stud.set_value(101, "ZhangSan", 'M');
    stud1.set_value(007, "tcg", 'm');

    cout << "学生1信息：" << endl;
    stud.display();
    cout << "学生2信息：" << endl;
    stud1.display();
    return 0;
}