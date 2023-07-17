#pragma once
#include "Carnivore.h"
#include "Lion.h"

class Tiger final : public Carnivore
{
public:
	//Carnivore 클래스에서 Final로 선언된 함수는 
	//더이상 하위 클래스에서 재정의 불가
	//virtual void Action();

	void FriendFunction(Lion lion)
	{
		lion.age = 5;
		lion.name = "FAKER";

		cout << "Lion.age :" << lion.age << endl;
		cout << "Lion.name :" << lion.name << endl;
	}

};

