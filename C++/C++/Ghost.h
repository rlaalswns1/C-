#pragma once
#include "Unit.h"

class Ghost : public Unit
{
private:
	int hp;

public:
	void Marine();

	//int GetHP();
	void SetHP(int hp);
	void skill() override;
};

