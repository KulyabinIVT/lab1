/* Лаб1.cpp: определяет точку входа для консольного приложения.
Составить описание класса для объектов-векторов, задаваемых координатами
концов в трехмерном пространстве. Обеспечить операции сложения и вычитания векторов с получением нового вектора (суммы или разности), вычисления
скалярного произведения двух векторов, длины вектора, косинуса угла между
векторами.
Написать программу, демонстрирующую работу с этим классом. Программа
должна содержать меню, позволяющее осуществить проверку всех методов класса.
*/

#include "stdafx.h"
#include "Vector.h"
#include "Windows.h"
#include "Лаб1.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int x, y, z, i, j, k, choice;
	Vector a, b, c;
	cout << "Введите координаты вектора a: " << endl;
	cin >> x >> y >> z;
	cout << "Введите координаты вектора b: " << endl;
	cin >> i >> j >> k;
	a = Vector(x, y, z);
	b = Vector(i, j, k);
	cout << "Что вы хотите сделать?" << endl;
	cout << "1. Найти сумму векторов" << endl;
	cout << "2. Найти разность векторов" << endl;
	cout << "3. Найти скалярное произведение векторов" << endl;
	cout << "4. Найти длины векторов" << endl;
	cout << "5. Найти косинус угла между векторами" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		c = a + b;
		cout << "Сложение a("; a.showVector(); cout << ") + b("; b.showVector(); cout << ") = c("; c.showVector(); cout << ")" << endl;
		break;
	}
	case 2:
	{
		c = a - b;
		cout << "Разность a("; a.showVector(); cout << ") - b("; b.showVector(); cout << ") = c("; c.showVector(); cout << ")" << endl;
		break;
	}
	case 3:
	{
		double d_a = a.length();
		double d_b = b.length();
		double cos = (a.getX()*b.getX() + a.getY() * b.getY()) / (sqrt((double)((a.getX()*a.getX()) + (a.getY() * a.getY()) + (a.getZ() * a.getZ())))*sqrt((double)((b.getX()*b.getX()) + (b.getY() * b.getY()) + (b.getZ() * b.getZ()))));
		cout << "Скалярное произведение a("; a.showVector(); cout << ") % b("; b.showVector(); cout << ") = "<< a.skal(d_a, d_b, cos)<< endl;
		break;
	}
	case 4:
	{
		double d_a = a.length();
		double d_b = b.length();
		cout << "Длина вектора a=" << d_a << "; длина вектора b=" << d_b << endl;
		break;
	}
	case 5:
	{
		double f = a.angle(b);
		cout << "Угол между векторами a и b = " << f << endl;
		break;

	}
	default:
	{
		cout << "Такого пункта нет в меню!"<<endl;
		break;
	}
	}
	
	system("pause");
    return 0;
}

