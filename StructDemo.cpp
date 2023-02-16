#include<iostream>
using namespace std;
#include<string>

/*
*Requirements:
*1.There are 5 heros(name,year,sex)
*2.To Create a struct array to store them
*3.Sort them by "bubble Sort Algorithm" according to their year
*Statistics:
*{"����"��23��"��"}	{"����"��22��"��"}{"�ŷ�"��20��"��"}{"����"��21��"��"}{"����"��19��"Ů"}
*/

//define the struct called "Hero"
typedef struct Hero {
	string hName;//name of a hero
	int hYear = 0;//year of a hero
	string hSex;//sex of a hero
}Hero;
//Statement of function "BubbleSort"&&"printInfo"&&"Swap"
void bubbleSort(Hero hArray[], int num);
void printInfo(Hero hArray[], int num);
void Swap(Hero p1, Hero p2);
//main function
int main(int argc, char* argv[]) {
	//1.����Hero���飬���5��Ӣ�۵���Ϣ
	Hero heros[5] = { {"����",23,"��"},{"����",22,"��"}, {"�ŷ�",20,"��"},{"����",21,"��"}, {"����",19,"Ů"} };
	/*cout << "Information of the five heros are following\t" << endl;*/
	//2.����BubbleSort�㷨��5��Ӣ�۵���Ϣ��������������������
	int len = sizeof(heros) / sizeof(Hero);
	/*for (int i = 0; i < len; i++) {
		cout << "		Ӣ������" << heros[i].hName << "���䣺" << heros[i].hYear << "�Ա�" << heros[i].hSex << endl;
	}*/
	bubbleSort(heros, len);
	//3.��ӡ���5��Ӣ�۵���Ϣ
	printInfo(heros, len);
	system("pause");
	return 0;
}

//define the function "BubbleSort"
void bubbleSort(Hero hArray[], int num) {
	int i = 0, j = 0;
	for (i = 0; i < num; i++) {
		for (j = 0; j < num - i; j++) {
			if (hArray[j].hYear > hArray[j+1].hYear) {
				Swap(hArray[j], hArray[j+1]);
			}
		}
	}
}

//define the function "printInfo"
void printInfo(Hero hArray[], int num) {
	cout << "Information of the five heros are following\t" << endl;
	for (int i = 0; i < num; i++) {
		cout << "		Ӣ������" << hArray[i].hName << "���䣺" << hArray[i].hYear << "�Ա�" << hArray[i].hSex << endl;
	}
}

//define the function "Swap"
void Swap(Hero p1, Hero p2) {//���ԣ���ϤC++�Ķ�֪����C++���õ��жԸ�ֵ�š�=��������
	Hero tmp = p2;
	p2 = p1;
	p1 = tmp;
}