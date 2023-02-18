#include<iostream>
#include<string>
using namespace std;
/*
* Function:To test the fucntion of "Constructors" & "Disconstructors"
* Author:linlulu
* Results:
* 1.构造函数----在类实例化（创建对象）后由编译器自动调用；
*	函数名与类名相同；无返回值；可以重载；主要作用是告诉编译器做一些内存分配等使用前的准备工作
* 2.析构函数：完成一些对象变量销毁前的收尾工作，比如：将其占用的空间释放，将符号表中记录删除...
* 函数名与类名相同，不过要加”~“以区别于构造函数，不可重载，无参
* 3.如果programmer没有给出明显的构造函数或析构函数，系统会自动创建函数体为空的构、析造函数
* 4.若programmer给出了constructors ||disconstructors,则系统就不会创建默认无参的c/d函数了
* programmer若想用，就必须要自己创建了
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
	cout << "Name：" << this->sName << "\tAge：" << this->sAge << "\tSex：" <<this->sSex<< endl;
}

Student test1() {
	Student student("linlulu", 24, "男");
	return student;
}

int main(int argc, char* argv[]) {
	Student student;
	student = test1();
	student.showInfo();
	system("pause");
	return 0;
}