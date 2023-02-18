#include<iostream>
#include<string>
using namespace std;
/*
* Function:To test the fucntion of "Constructors" & "Disconstructors"
* Author:linlulu
* Results:
* 1.���캯��----����ʵ�������������󣩺��ɱ������Զ����ã�
*	��������������ͬ���޷���ֵ���������أ���Ҫ�����Ǹ��߱�������һЩ�ڴ�����ʹ��ǰ��׼������
* 2.�������������һЩ�����������ǰ����β���������磺����ռ�õĿռ��ͷţ������ű��м�¼ɾ��...
* ��������������ͬ������Ҫ�ӡ�~���������ڹ��캯�����������أ��޲�
* 3.���programmerû�и������ԵĹ��캯��������������ϵͳ���Զ�����������Ϊ�յĹ������캯��
* 4.��programmer������constructors ||disconstructors,��ϵͳ�Ͳ��ᴴ��Ĭ���޲ε�c/d������
* programmer�����ã��ͱ���Ҫ�Լ�������
*/

class Student {
private:
	string sName;
	int sAge = 0;
	string sSex;
public:
	Student(){
		cout << "This is the construcor without parameter!!!" << endl;
	}
	Student(string name, int age, string sex);
	void showInfo();
	~Student() {
		cout << "This is the disconstructor without any parameters!!!" << endl;
	}
};
Student::Student(string name, int age, string sex) {
	this->sName = name;
	this->sAge = age;
	this->sSex = sex;
	cout << "This is the constructor with three parameters which are 'name'&'age'&'sex'" << endl;
}
void Student::showInfo(){
	cout << "The student's information is\t" << endl;
	cout << "Name��" << this->sName << "\tAge��" << this->sAge << "\tSex��" <<this->sSex<< endl;
}

Student test1() {
	Student student("linlulu", 24, "��");
	return student;
}

int main(int argc, char* argv[]) {
	Student student;
	student = test1();
	student.showInfo();
	system("pause");
	return 0;
}