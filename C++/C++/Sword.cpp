#include "Sword.h"
#include <iostream>

Sword::~Sword()
{
std::cout << "Swprd() �Ҹ�" << std::endl;
}

void Sword::Stat()
{
	std::cout << "ġ��Ÿ Ȯ�� : " << m_criticalHit << std::endl;
	std::cout << "�� ���ݷ� : " << m_attack << std::endl;
}

void Sword::Attack()
{
	std::cout << "����" << std::endl;
}