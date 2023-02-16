#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
/*
*Function:to test the usage of "struct" using student info managing
* Author:linlulu
*/
/*
*To define the struct of student info callled "struct Student"
*/
typedef struct Student {			
	long stu_num;//学号
	string stu_name;//姓名
	string stu_sex;//性别
	int stu_year;//年龄
	float stu_gpa;//平均绩点
} Student,*StuList;

int main(int argc, char* argv[]) {
	Student stu[3];
	stu[0] = {201181,"zhangliwen","M",24,3.14f};
	//stu[1].stu_num = 201882, stu[1].stu_name = "wangwei";
	//stu[1].stu_sex = "M", stu[1].stu_year = 26;
	//stu[1].stu_gpa = 3.50f;
	//cout << "Please input the third student infomation:num,name,sex,year,gpa"<<endl;
	//cin >> stu[2].stu_num >> stu[2].stu_name >> stu[2].stu_sex >> stu[2].stu_year >> stu[2].stu_gpa;
	//cout << "Three students's infomation is following:" << endl;
	//cout << "stu_num" << "			"<< "stu_name" << "		   " << "stu_sex" << "         " << "stu_year" << "         "<<"stu_gpa" << "\n";
	//for (int i = 0; i < 3; i++) {//Print the three students' infomation following
	//	cout<<stu[i].stu_num<<"			" << stu[i].stu_name << "			" << stu[i].stu_sex << "			" << stu[i].stu_year << "			" << stu[i].stu_gpa<<"\n";
	//}
	StuList stu_ptr = NULL;
	stu_ptr = (StuList)malloc(sizeof(Student));
	cout << "Please input the fourth student infomation:num,name,sex,year,gpa" << endl;
	cin >> stu_ptr->stu_num;
	/*>> stu_ptr->stu_name >> stu_ptr->stu_sex >> stu_ptr->stu_year >> stu_ptr->stu_gpa;*/
	cout << "Infomation of the fourth student is following" << endl;
	//cout << "stu_name:" << stu_ptr->stu_name<<"stu_num:" << stu_ptr->stu_num<<"stu_sex:" 
	//	<< stu_ptr->stu_sex<<"stu_year:" << stu_ptr->stu_year<<"stu_gpa:" << stu_ptr->stu_gpa<<"\n";
	cout << "stu_num is "<<stu_ptr->stu_num;
	return 0;
}