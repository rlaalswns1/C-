#pragma once
#include <iostream>
#include "Marine.h"
using namespace std;

class Unit
{
private:
	int hp;
	//int attack;
public:
	//���� ���� �Լ�
	//���� Ŭ�������� ������ �� ������ ����ϴ� ��� �Լ�
	virtual void skill() = 0;
	virtual void SetHP(int hp) = 0;
	virtual void GetHP() = 0;
};

