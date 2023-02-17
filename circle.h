#pragma once
#include<iostream>
#include "point.h"
using namespace std;
//define a class called "circle"
class circle {
private:
	point p;
	double r;//°ë¾¶
public:
	void setR(double r);
	double getR();
	void setPoint(double x, double y);
	point getPoint();
	void pcPosition(point &temp);
};