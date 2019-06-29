/************************************************************
**	Author: Wes Bakane
**	Date: 6/4/2019
**	Description: The Point class represents a 2-dimensional
**				 vector quantity with helper functions for
**				 basic mathematical operations.
************************************************************/
#include "Point.hpp"

//Default constructor initializes vector to zero
Point::Point()
{
	x = 0.0;
	y = 0.0;
}

//Constructor creates new point from two coordinates
Point::Point(double xIn, double yIn)
{
	x = xIn;
	y = yIn;
}

void Point::setXCoord(double value)
{
	x = value;
}

void Point::setYCoord(double value)
{
	y = value;
}

double Point::getXCoord() const
{
	return x;
}

double Point::getYCoord() const
{
	return y;
}

//Returns the square distance to the point p
double Point::SqrDistanceTo(const Point& p)
{
	//Calculate square magnitude of p1 - p2
	double rX = p.getXCoord() - x;
	double rY = p.getYCoord() - y;
	return rX * rX + rY * rY;
}

//Vector-Vector addition
Point& Point::operator+(const Point& other)
{
	x += other.getXCoord();
	y += other.getYCoord();

	return *this;
}

//Vector-Vector subtraction
Point& Point::operator-(const Point& other)
{
	x -= other.getXCoord();
	y -= other.getYCoord();

	return *this;
}

//Vector-Scalar multiplication
Point& Point::operator*(double scalar)
{
	x *= scalar;
	y *= scalar;

	return *this;
}

//Vector-Scalar division
Point& Point::operator/(double scalar)
{
	x /= scalar;
	y /= scalar;

	return *this;
}

//Returns 2D scalar dot product
double Point::Dot(const Point& lhs, const Point& rhs)
{
	return lhs.getXCoord() * rhs.getXCoord() + lhs.getYCoord() * rhs.getYCoord();
}

//Returns the magnitude of the vector cross product.
//Represents the area of the parallelogram formed by the vectors.
double Point::Cross(const Point& lhs, const Point& rhs)
{
	//(v1.x * v2.y) - (v1.y * v2.x)
	return (lhs.getXCoord()*rhs.getYCoord()) - (lhs.getYCoord()*rhs.getXCoord());
}