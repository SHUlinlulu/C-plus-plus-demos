#include<iostream>
using namespace std;
/*
* Function:to test the functions of "const pointer" & "pointer const"
* Author:linlulu
*/

//int main(int argc,char * argv[]) {
//	int a = 10, b = 9;
//	/*
//	*Test the function of "const pointer"
//	*/
//	const int* p1 = &a;
//	//*p1 = b;//会报错，原因是常量指针只能修改指向，而不能修改指针指向的地址内的内容
//	p1 = &b;//正确
//	cout << "*p1=" << *p1 << endl;
//	/*
//	*Test the function of "pointer const"
//	*/
//	int* const p2 = &b;
//	*p2 = a;//正确
//	//p2 = &a;//会报错，因为指针常量指向不能修改，而其所指向的地址的值可以修改
//	//注释快捷键：ctrl + shift +/
//	cout << "*p2=" <<*p2<< endl;
//	return 0;
//}