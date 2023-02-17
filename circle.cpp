#include "circle.h"
void circle::setR(double r) {
	this->r = r;
}
double circle::getR() {
	return this->r;
}
void circle::pcPosition(point &temp) {
	double distance = (this->p.getX() - temp.getX()) * (this->p.getX() - temp.getX()) + (this->p.getY() - temp.getY() )* (this->p.getY() - temp.getY());
	if ((distance - this->r * this->r) < 0) {
		cout << "The point given is in the circle given!!" << endl;
	}
	else if ((distance - this->r * this->r) > 0) {
		cout << "The point given is out the circle given!!" << endl;
	}
	else {
		cout << "The point given is on the circle given!!" << endl;
	}
}
void circle::setPoint(double x, double y) {
	this->p.setX(x);
	this->p.setY(y);
}
point circle::getPoint() {
	point temp_p;
	temp_p.setX(this->p.getX());
	temp_p.setY(this->p.getY());
	return temp_p;
}