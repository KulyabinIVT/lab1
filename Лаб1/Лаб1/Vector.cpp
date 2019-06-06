#include "stdafx.h"
#include "Vector.h"
using namespace std;

void Vector::showVector()
{
	cout << x << ":" << y << ":" << z << "";
}
void Vector::showProizVector()
{
	cout << x + y + z << "";
}
//��������
Vector Vector :: operator+ (Vector v2)const
{
	int vx = x + v2.x;
	int vy = y + v2.y;
	int vz = z + v2.z;
	return Vector(vx, vy, vz);
}

//���������
Vector Vector :: operator- (Vector v2)const
{
	int vx = x - v2.x;
	int vy = y - v2.y;
	int vz = z - v2.z;
	return Vector(vx, vy, vz);
}

//��������� ������������ 
double Vector::skal(double d1, double d2, double cos)
{
	return d1 * d2*cos;
}

int Vector::getX()
{
	return x;
}
int Vector::getY()
{
	return y;
}
int Vector::getZ()
{
	return z;
}

//����� �������
double Vector::length()
{
	return sqrt(x*x + y * y + z * z);
}

//���� ����� ���������
double Vector::angle(Vector v2)
{
	return acos((x*v2.x + y * v2.y) / (sqrt((double)((x*x) + (y * y)+ (z * z)))*sqrt((double)((v2.x*v2.x) + (v2.y * v2.y) + (v2.z * v2.z)))));
}
