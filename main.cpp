/*
Program:	Lab 10 Cicrle Classes
Author :	Quinatzin Sintora
Class  :	CSCI 140 MW
Date   :	05/10/2017
Desciption:		Using the Circle Class and adding the values of both Circle Object
to obtain distances.

I certifiy that the code below is my own work.

Exception(s): N/A
*/
#include "Circle.h"
#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;
//const double PI = 3.14;
int main()
{
	cout << "Author: Quinatzin Sintora.\n" << endl;

	Circle center(3, 2);
	Circle center2(4, 4);
	Circle c3 = center - center2;
	
	cout << "Circle ";
	center.printCircleStats();
	cout << "Circle2 ";
	center2.printCircleStats();
	c3.distance();
	system("Pause");
	return 0;
}