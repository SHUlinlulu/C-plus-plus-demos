#include<iostream>
using namespace std;
/*
*Function: Go to Detect Memory Partitioning Before and After C++ Code Runs
* Author:linlulu
*/
int temp3 = 0;
const int temp4 = 1010;
int main() {
    const int temp1 = 101010;
    const string temp5 = "linlulu";
    static int temp2 = 10;
    cout << "The position of temp1 is " << (int)&temp1 << endl;
    cout << "The position of temp2 is " << (int)&temp2 << endl;
    cout << "The position of temp3 is " << (int)&temp3 << endl;
    cout << "The position of temp4 is " << (int)&temp4 << endl;
    cout << "The position of temp5 is " << (int)&temp5 << endl;
    system("pause");//Press any key to continue ...
    return 0;
}