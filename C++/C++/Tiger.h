#pragma once
#include "Carnivore.h"
#include "Lion.h"

class Tiger final : public Carnivore
{
public:
	//Carnivore Ŭ�������� Final�� ����� �Լ��� 
	//���̻� ���� Ŭ�������� ������ �Ұ�
	//virtual void Action();

	void FriendFunction(Lion lion)
	{
		lion.age = 5;
		lion.name = "FAKER";

		cout << "Lion.age :" << lion.age << endl;
		cout << "Lion.name :" << lion.name << endl;
	}

};

