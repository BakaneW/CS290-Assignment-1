/************************************************************
**	Author: Wes Bakane
**	Date: 6/4/2019
**	Description: The Point class represents a 2-dimensional
**				 vector quantity with helper functions for
**				 basic mathematical operations.
************************************************************/
#ifndef POINT_HPP
#define POINT_HPP

#include <cmath>

class Point
{
private:
	double x;
	double y;
public:
	Point();
	Point(double xIn, double yIn);
	void setXCoord(double value);
	void setYCoord(double value);
	double getXCoord() const;
	double getYCoord() const;
	double SqrDistanceTo(const Point& p);

	//Basic vector operation helper functions
	Point&operator+(const Point& other);
	Point&operator-(const Point& other);
	Point&operator*(double scalar);
	Point&operator/(double scalar);
	static double Dot(const Point& lhs, const Point& rhs);
	//Only returns magnitude of vector cross product
	static double Cross(const Point& lhs, const Point& rhs);
};

#endif
