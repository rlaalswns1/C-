#pragma once
#include<iostream>
#include "Sword.h"
#include "Marine.h"
#include "Ghost.h"

using namespace std;

void Recovery(Unit* uint)
{

}

int main()
{
	//업 캐스팅

	Marine marine;
	Ghost ghost;

	//Unit* uptr = &marine;
	//uptr->skill();

	//uptr = &ghost;
	//uptr->skill();

	Recovery(&marine);
	cout << "마리의 체력" << marine.GetHP() << endl;

	Recovery(&ghost);
	cout << "고스트의 체력" << ghost.GetHP() << endl;

	return 0;
}