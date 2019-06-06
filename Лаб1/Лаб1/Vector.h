#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>
#include <conio.h>

class Vector
{
private://координаты вектора
	int x;
	int y;
	int z;
public:
	Vector() : x(0), y(0), z(0)
	{}
	Vector(int vx, int vy, int vz) : x(vx), y(vy), z(vz)
	{}
	void showVector();
	void showProizVector();
	double angle(Vector v2);
	Vector operator+(Vector)const;
	Vector operator-(Vector)const;
	Vector operator%(Vector)const;
	double skal(double d1, double d2, double cos);
	int getX();
	int getY();
	int getZ();
	double length();
};
#endif // VECTOR_H

