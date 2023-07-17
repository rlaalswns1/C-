#include "Sword.h"
#include <iostream>

Sword::~Sword()
{
std::cout << "Swprd() 소멸" << std::endl;
}

void Sword::Stat()
{
	std::cout << "치명타 확률 : " << m_criticalHit << std::endl;
	std::cout << "검 공격력 : " << m_attack << std::endl;
}

void Sword::Attack()
{
	std::cout << "베기" << std::endl;
}