#include "Weapon.h"

Weapon::~Weapon()
{
	cout << "Weapon() �Ҹ�" << endl;
}

void Weapon::Stat()
{
	std::cout << "���ݷ� : " << m_attack << std::endl;
}




