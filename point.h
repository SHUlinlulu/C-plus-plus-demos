#pragma once
#include<iostream>
using namespace std;
//define a class called "point"
class point {
private:
	double x;
	double y;
public:
	void setX(double x);
	double getX();
	void setY(double y);
	double getY();
};