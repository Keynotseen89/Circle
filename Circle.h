#pragma once


class Circle
{
public:
	Circle();					//default
	Circle(float r);			//Construtor with Radius
	Circle(int, int);			
	void setCenter(int, int);	//Set Center
	double findArea();			//Obtain Area
	double findCircumference();	//Find Circumference
	void printCircleStats();	//Print CircleStats
	void setX(int x);			//SetX
	void setY(int y);			//SetY
	int getX();					//obtain x
	int getY();					//obtain y
	void distance();			//display distance
	friend Circle operator-(const Circle& object, const Circle& ob);
	Circle operator=(const Circle& right)
	{
		Circle temp;
		temp.center_x = right.center_x;// center_x + right.center_x;
		temp.center_y = right.center_y; //; center_y + right.center_y;
		temp.radius = right.radius; //radius + right.radius;
		return temp;
	}	
	~Circle();
private:
	float radius;
	int center_x;
	int center_y;

	const double PI = 3.14;
};

