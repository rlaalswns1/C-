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
	//순수 가상 함수
	//하위 클래스에서 재정의 할 것으로 기대하는 멤버 함수
	virtual void skill() = 0;
	virtual void SetHP(int hp) = 0;
	virtual void GetHP() = 0;
};

