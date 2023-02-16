#include<iostream>
using namespace std;
/*
*Function:to test the function of multi-array
* Author:llinlulu
*/

int main(int argc, char* argv[]) {
	int a[3][4] = { {0,0,0,0} };
	cout << "Please input a multi-array 3x4" << endl;
	for(int i=0;i<3;i++)
		for (int j = 0; j < 4; j++) {
			cin >> a[i][j];
		}
	cout << "Print the multi-array following:" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << a[i][j] << "\t";
		}
		cout << "\n";
	}
	return 0;
}