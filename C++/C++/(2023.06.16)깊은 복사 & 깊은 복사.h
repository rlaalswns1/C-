#pragma once
#include <iostream>
#include"DataFile.h"
#include "Stdafx.h"

using namespace std;

#pragma region 깊은 복사
// 객체를 복사할 떄 참조 값이 아닌 인스턴스 자체를
// 새로 복사하여 서로 다른 메모리를 사용하는 복사

class GameObject
{
public:
	int size;
	int* data;
	static int deathCount;

	GameObject(int m_size)
	{
		size = m_size;
		data = new int[size];
	}

	GameObject(const GameObject& clone)
	{
		size = clone.size;
		data = new int[size];
	}

	~GameObject()
	{
		delete[] data;
		deathCount++;
		cout << "GameObject가 파괴된 횟수 : " << deathCount << endl;
	}
};
int GameObject::deathCount = 0;

#pragma endregion


int main()
{
#pragma region 얕은 복사
	// 객체를 복사할 떄 주소값을 복사하여,
	// 같은 메모리를 가리키는 복사

	//int* ptr1 = new int;
	//int* ptr2 = ptr1;

	//얕은 복사의 경우 같은 객체가 서로 같은 메모리 공간을
	//참조하고 있기 떄문에 하나의 객체로 값을 변경하게 되면
	//서로 참조된 객체도 함께 영향을 받음
	//*ptr1 = 100;
	//*ptr2 = 999;

	//cout << "ptr1이 카리키는 값 : " << *ptr1 << endl;
	//cout << "ptr2이 카리키는 값 : " << *ptr2 << endl;

	//delete ptr2;
	//delete ptr1;

#pragma endregion

#pragma region 깊은 복사
	//data[  ] ------> [] [] []
	//GameObject Obj1(3);
	//Obj1.data[0] = 111;

	//data[] 
	//GameObject Obj2 = Obj1;
	//Obj2.data[0] = 222;

	//cout << "Obj1.data[0]" << Obj1.data[0] << endl;
	//cout << "Obj2.data[0]" << Obj2.data[0] << endl;


#pragma endregion

	GameObject::deathCount;

	//GameObject monster1(1);
	//GameObject monster2(2);
	//GameObject monster3(3);

	return 0;
}