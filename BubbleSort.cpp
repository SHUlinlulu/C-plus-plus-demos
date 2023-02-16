#include<iostream>
#include<cstdio>
#define Swap(int,a,b) int temp=a;a=b;b=temp;//There are some problems in defining multiple-line Macro
using namespace std;
/**
 * Function:To sort ten integer number by Bubble Algorithm
 * Author:linlulu
*/
void Bubble(int*);//Statement of Bubble function
int main() {
    int arr[10] = { 0 };
    for (int i = 0; i < 10; i++) {//Initial the arr[10]
        cin >> arr[i];
    }
    Bubble(arr);
    cout << "The 10 integer number sorted from low to high are ";
    for (int j = 0; j < 10; j++) {
        cout << arr[j] << " ";
    }
    system("pause");
    return 0;
}
/**
 * Define the function of Bubble Sort
*/
void Bubble(int* p) {
    int i, j;
    for (i = 0; i < 10; i++)
        for (j = 0; j < 10 - i; j++) {
            if (*(p + j) > *(p + j + 1)) {
                Swap(int, *(p + j), *(p + j + 1));//Add a comment line 
            }
        }
}
