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
//	//*p1 = b;//�ᱨ��ԭ���ǳ���ָ��ֻ���޸�ָ�򣬶������޸�ָ��ָ��ĵ�ַ�ڵ�����
//	p1 = &b;//��ȷ
//	cout << "*p1=" << *p1 << endl;
//	/*
//	*Test the function of "pointer const"
//	*/
//	int* const p2 = &b;
//	*p2 = a;//��ȷ
//	//p2 = &a;//�ᱨ����Ϊָ�볣��ָ�����޸ģ�������ָ��ĵ�ַ��ֵ�����޸�
//	//ע�Ϳ�ݼ���ctrl + shift +/
//	cout << "*p2=" <<*p2<< endl;
//	return 0;
//}