#include<iostream>
using namespace std;
/*
* Function:Through compare the usage of "struct" &"class" to confirm their traits
* Author:linlulu
* Results:"class" & "struct" just a identify difference is that their default authority 
*"class default authority is private" while "struct default authority is public"
*/
struct Student {
private:
	string sName;
public:
	void setName(string name) {
		this->sName = name;
	}
	void show() {
		cout << "The student's name is " << this->sName << endl;
	}
};

class Teacher {
private:
	string tName;
public:
	void setName(string name) {
		this->tName = name;
	}
	void show() {
		cout << "The teacher's name is " << this->tName << endl;
	}
};

int main(int argc, char* argv[]) {
	Student student;
	Teacher teacher;
	student.setName("linlulu");
	teacher.setName("licunqing");
	student.show();
	teacher.show();
	system("pause");
	return 0;
}