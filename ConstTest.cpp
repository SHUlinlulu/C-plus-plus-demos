#include<iostream>
using namespace std;
/*
* Function: to test the functions of "const pointer" & "pointer const"
* Author:linlulu
*/

int main(int argc, char* argv[]) {
	int a = 10, b = 67;
	const int* ptr1 = &a;
	//*ptr1 = b;//ERROR:A try to modify the value of a
	ptr1 = &b;//Modify the ptr1 re-pointing  to b
	cout <<*ptr1 ;
	system("pause");
	return 0;
}