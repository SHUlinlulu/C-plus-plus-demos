#include<iostream>
#include<string>
#include<ctime>
using namespace std;
/*
*Function:to describe the relationship between Student and Teacher
*Author:linlulu 
*/
/*
*Description:3个教师，15个学生，每个教师带了5个学生，教师的属性是姓名，所带的学生数组
* 学生的属性是学生的姓名和英语成绩
*/
//define Student

typedef struct Student {
	string sName;
	int score;//这里为了简化程序将学生成绩都设为了整数
}Student;
//define Teacher
typedef struct Teacher {
	string tName;
	Student sArray[5];//在这里需要将学生结构体的定义在前，否则会报错
}Teacher;
/*提前声明函数*/
void allocateSpace(Teacher tArray[], int len);
void printInfo(Teacher tArray[], int len);
//main函数
int main() {
	//1.创建三个教师的结构体数组
	Teacher tArray[3];//创建3个教师
	//2.初始化教师的信息以及其所带学生的信息
	int len = sizeof(tArray) / sizeof(Teacher);//为了程序的通用性
	allocateSpace(tArray,len );
	//3.打印出教师的信息以及学生的信息
	printInfo(tArray, len);
	system("pause");
	return 0;
}

//define function:allcoateSpace(...)
void allocateSpace(Teacher tArray[], int len) {
	//设置随机种子
	srand((unsigned int)time(0));
	string nameSeed = "ABCDE";//small tips
	//初始化教师信息
	for (int i = 0; i < len; i++) {
		tArray[i].tName = "teacher_";
		tArray[i].tName += nameSeed[i];//给教师名字后加后缀
		for (int j = 0; j < 5; j++) {
			tArray[i].sArray[j].sName = "student_";
			tArray[i].sArray[j].sName += nameSeed[j];
			int random = rand() % 61 + 40;//产生随机数40~100
			tArray[i].sArray[j].score = random;
		}
	}
}

//define function:void printInfo
void printInfo(Teacher tArray[], int len) {
	//输出学生和教师的信息
	for (int i = 0; i < len; i++) {
		cout << "教师姓名：\t"<<tArray[i].tName << endl;
		for (int j = 0; j < 5; j++) {
			cout << "		学生姓名：" << tArray[i].sArray[j].sName << "学生成绩：" << tArray[i].sArray[j].score<<endl;
		}
	}
}
