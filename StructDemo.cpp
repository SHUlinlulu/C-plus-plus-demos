#include<iostream>
using namespace std;
#include<string>

/*
*Requirements:
*1.There are 5 heros(name,year,sex)
*2.To Create a struct array to store them
*3.Sort them by "bubble Sort Algorithm" according to their year
*Statistics:
*{"刘备"，23，"男"}	{"关羽"，22，"男"}{"张飞"，20，"男"}{"赵云"，21，"男"}{"貂蝉"，19，"女"}
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
	//1.创建Hero数组，存放5个英雄的信息
	Hero heros[5] = { {"刘备",23,"男"},{"关羽",22,"男"}, {"张飞",20,"男"},{"赵云",21,"男"}, {"貂蝉",19,"女"} };
	/*cout << "Information of the five heros are following\t" << endl;*/
	//2.调用BubbleSort算法将5个英雄的信息按照年龄的升序从新排列
	int len = sizeof(heros) / sizeof(Hero);
	/*for (int i = 0; i < len; i++) {
		cout << "		英雄名：" << heros[i].hName << "年龄：" << heros[i].hYear << "性别：" << heros[i].hSex << endl;
	}*/
	bubbleSort(heros, len);
	//3.打印输出5个英雄的信息
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
		cout << "		英雄名：" << hArray[i].hName << "年龄：" << hArray[i].hYear << "性别：" << hArray[i].hSex << endl;
	}
}

//define the function "Swap"
void Swap(Hero p1, Hero p2) {//测试，熟悉C++的都知道，C++内置的有对赋值号”=“的重载
	Hero tmp = p2;
	p2 = p1;
	p1 = tmp;
}