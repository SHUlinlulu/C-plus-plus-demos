#include<iostream>
using namespace std;
/*
*Function:to try different types function overriding
* Author:linlulu
* Notice:
* 1.��������Ϊ�����Ĳ���ʱ���ǿ��Ը��ݲ��������ͽ������֣��޶�������������
* 2.���뽫ĳ�������������أ��Ͳ�Ҫ�������Ĭ�ϲ����������ײ���������
* 3.���������أ��������ͣ�const����Ҳ�㣩��������˳��---->�����б�����Ծ�������������
*/
//statements
void func();
void func(int&);
void func(const int&);//const int&a=10;�ǺϷ���-->OS�������ˡ�int temp=10;const 
//int&a=temp;��ֻ�Ƕ������ǲ��ɼ���
void func(double);
void func(int, double);
void func(double, int);
//int func(double, int);��������ʾ�޷����أ����������ķ���ֵ���������ֺ���������

int main(int argc, char* argv[]) {
	int temp = 10;
	//testing
	func();
	func(temp);
	func(10);
	func(3.14);
	func(10.25, 17);
	func(3, 3.25);
	system("pause");
	return 0;
}

//define function "func"

void func() {
	cout << "This is function without any parameters!!!" << endl;
}
void func(int& a) {
	cout << "This is function with a 'int &' parameter !!!" <<"\ta="<< a<<endl;
}
void func(const int& a) {//const int&a=10;�ǺϷ���-->OS�������ˡ�int temp=10;const int&a=temp;��ֻ�Ƕ������ǲ��ɼ���
	cout << "This is function with a ��const int &�� parameter!!!" << "\ta=" << a<< endl;
}
void func(double a) {
	cout << "This is function with a 'double' parameter !!!" << "\ta=" << a << endl;
}
void func(int a, double b) {
	cout << "This is function with two  parameters(int,double) !!!" << "\ta=" << a << "\tb=" << b << endl;
}
void func(double a, int b) {
	cout << "This is function with two  parameters(double,int) !!!" << "\ta=" << a << "\tb=" << b << endl;
}