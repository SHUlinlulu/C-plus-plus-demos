#include<iostream>
#include<string>
#include<ctime>
using namespace std;
/*
*Function:to describe the relationship between Student and Teacher
*Author:linlulu 
*/
/*
*Description:3����ʦ��15��ѧ����ÿ����ʦ����5��ѧ������ʦ��������������������ѧ������
* ѧ����������ѧ����������Ӣ��ɼ�
*/
//define Student

typedef struct Student {
	string sName;
	int score;//����Ϊ�˼򻯳���ѧ���ɼ�����Ϊ������
}Student;
//define Teacher
typedef struct Teacher {
	string tName;
	Student sArray[5];//��������Ҫ��ѧ���ṹ��Ķ�����ǰ������ᱨ��
}Teacher;
/*��ǰ��������*/
void allocateSpace(Teacher tArray[], int len);
void printInfo(Teacher tArray[], int len);
//main����
int main() {
	//1.����������ʦ�Ľṹ������
	Teacher tArray[3];//����3����ʦ
	//2.��ʼ����ʦ����Ϣ�Լ�������ѧ������Ϣ
	int len = sizeof(tArray) / sizeof(Teacher);//Ϊ�˳����ͨ����
	allocateSpace(tArray,len );
	//3.��ӡ����ʦ����Ϣ�Լ�ѧ������Ϣ
	printInfo(tArray, len);
	system("pause");
	return 0;
}

//define function:allcoateSpace(...)
void allocateSpace(Teacher tArray[], int len) {
	//�����������
	srand((unsigned int)time(0));
	string nameSeed = "ABCDE";//small tips
	//��ʼ����ʦ��Ϣ
	for (int i = 0; i < len; i++) {
		tArray[i].tName = "teacher_";
		tArray[i].tName += nameSeed[i];//����ʦ���ֺ�Ӻ�׺
		for (int j = 0; j < 5; j++) {
			tArray[i].sArray[j].sName = "student_";
			tArray[i].sArray[j].sName += nameSeed[j];
			int random = rand() % 61 + 40;//���������40~100
			tArray[i].sArray[j].score = random;
		}
	}
}

//define function:void printInfo
void printInfo(Teacher tArray[], int len) {
	//���ѧ���ͽ�ʦ����Ϣ
	for (int i = 0; i < len; i++) {
		cout << "��ʦ������\t"<<tArray[i].tName << endl;
		for (int j = 0; j < 5; j++) {
			cout << "		ѧ��������" << tArray[i].sArray[j].sName << "ѧ���ɼ���" << tArray[i].sArray[j].score<<endl;
		}
	}
}
