#include "Weapon.h"

Weapon::~Weapon()
{
	cout << "Weapon() ¼Ò¸ê" << endl;
}

void Weapon::Stat()
{
	std::cout << "°ø°Ý·Â : " << m_attack << std::endl;
}




