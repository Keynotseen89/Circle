
#include "Circle.h"
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
Circle::Circle()
{
	radius = 1;
	center_x = 0;
	center_y = 0;
	
}

//set radius to r
Circle::Circle(float r)
{
	radius = r;
}
//set Center x and center y
Circle::Circle(int x, int y)
{
	center_x = x;
	center_y = y;
}
//find area of Circle
double Circle::findArea()
{
	return(PI * (radius * radius));
}

//Finds Circumference
double Circle::findCircumference()
{
	return(2 * (PI * radius));
}

// This procedure prints out the radius and center coordinates of the circle 
// object that calls it. 
void Circle::printCircleStats()
{
	cout << "center: (" << center_x << ", " << center_y << ")" << endl;
}
//set center x and y
void Circle::setCenter(int x, int y)
{
	center_x = x;
	center_y = y;
}
//set x
void Circle::setX(int x)
{
	center_x = x;
}
//set y
void Circle::setY(int y)
{
	center_y = y;
}
//Returns center_x
int Circle::getX()
{
	return center_x;
}
//Returns center_y
int Circle::getY()
{
	return center_y;
}
//Display distance from both 
void Circle::distance()
{
	cout << setprecision(4) << "The two circles are " <<sqrt(pow(center_x, 2) + pow(center_y, 2)) 
		<< " units aparts." << endl;
}

Circle operator-(const Circle& object, const Circle& ob)
{
	Circle c;
	c.center_x = object.center_x - ob.center_x;
	c.center_y = object.center_y - ob.center_y;
	c.radius = object.radius - ob.radius;
	return c;			
}

Circle::~Circle()
{
}
