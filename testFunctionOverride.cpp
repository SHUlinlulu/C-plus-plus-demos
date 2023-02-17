#include<iostream>
using namespace std;
/*
*Function:to try different types function overriding
* Author:linlulu
* Notice:
* 1.当引用作为函数的参数时，是可以根据参数的类型进行区分，无二义性正常调用
* 2.若想将某个函数进行重载，就不要给其进行默认参数，否则易产生二义性
* 3.函数的重载：参数类型（const修饰也算），个数，顺序---->参数列表的特性决定函数的重载
*/
//statements
void func();
void func(int&);
void func(const int&);//const int&a=10;是合法的-->OS隐含做了”int temp=10;const 
//int&a=temp;“只是对我们是不可见的
void func(double);
void func(int, double);
void func(double, int);
//int func(double, int);编译器提示无法重载，不能因函数的返回值类型来区分函数的重载

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
void func(const int& a) {//const int&a=10;是合法的-->OS隐含做了”int temp=10;const int&a=temp;“只是对我们是不可见的
	cout << "This is function with a ‘const int &’ parameter!!!" << "\ta=" << a<< endl;
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