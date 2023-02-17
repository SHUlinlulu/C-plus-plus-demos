#include<iostream>
using namespace std;
/*
* Function:To test "References as function parameters" &&
*	"Default parameters of the function"
* Author:linlulu
*/
void Swap(int&, int&);
int Sum(int a, int b = 0, int c = 10);//Statement:The function owns two default parameters
/*
*1.From the first parameter with default parameter 
*to the last parameter,there must be consistent default parameters;
* 2.If the Statement has given the default parameters,the formal definition of the function 
*had better own the same default parameters or not give.Otherwise,it may cause "ERROR"
*/
int main(int argc, char* argv[]) {
	int a = 10, b = 9;
	int c = 20;
	int sum = 0;
	cout << "Before swaping,a = " << a << ";\tb=" << b << endl;
	Swap(a, b);
	cout << "After swaping,a = " << a << ";\tb=" << b << endl;
	sum = Sum(a, b, c);
	cout << "The sum of a&b&c is " << sum<<endl;
	system("pause");
	return 0;
}

//define function "Swap"
void Swap(int& i, int& j) {
	int temp = 0;
	temp = i;
	i = j;
	j = temp;
}

//define function "Sum"
int Sum(int a, int b, int c) {
	return a + b + c;
}