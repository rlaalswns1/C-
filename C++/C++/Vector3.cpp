#include "Vector3.h"
using namespace std;

Vector3::Vector3(int x, int y, int z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

void Vector3::Print()
{
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;
}

Vector3 Vector3::operator+(Vector3& clone)
{
	x = x + clone.x;
	x = y + clone.y;
	x = z + clone.z;

	return Vector3(x,y,z);
}

Vector3& Vector3::operator++()
{
	// TODO: insert return statement here
	this->x += 1;
	this->y += 1;
	this->z += 1;

	return *this;
}


