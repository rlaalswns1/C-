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
	//�� ĳ����

	Marine marine;
	Ghost ghost;

	//Unit* uptr = &marine;
	//uptr->skill();

	//uptr = &ghost;
	//uptr->skill();

	Recovery(&marine);
	cout << "������ ü��" << marine.GetHP() << endl;

	Recovery(&ghost);
	cout << "��Ʈ�� ü��" << ghost.GetHP() << endl;

	return 0;
}