#include<iostream>
#include "point.h"
#include "circle.h"
using namespace std;
/*
* Function:To testify that if the point is in||out||on the circle using ".cpp&&.h"file
* Author:linlulu
*/

int main(int argc, char* argv[]) {
	circle c1;
	c1.setR(2.00);
	c1.setPoint(0.0, 0.0);
	//testing
	point p1;//This point is in the circle
	p1.setX(0.0);
	p1.setY(1.0);
	c1.pcPosition(p1);

	point p2;//This point is on the circle
	p2.setX(0.0);
	p2.setY(2.0);
	c1.pcPosition(p2);

	point p3;//This point is out the circle
	p3.setX(1.0);
	p3.setY(2.0);
	c1.pcPosition(p3);
	system("pause");
	return 0;
}