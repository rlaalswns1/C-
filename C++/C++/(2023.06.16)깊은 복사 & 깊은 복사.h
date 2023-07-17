#pragma once
#include <iostream>
#include"DataFile.h"
#include "Stdafx.h"

using namespace std;

#pragma region ���� ����
// ��ü�� ������ �� ���� ���� �ƴ� �ν��Ͻ� ��ü��
// ���� �����Ͽ� ���� �ٸ� �޸𸮸� ����ϴ� ����

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
		cout << "GameObject�� �ı��� Ƚ�� : " << deathCount << endl;
	}
};
int GameObject::deathCount = 0;

#pragma endregion


int main()
{
#pragma region ���� ����
	// ��ü�� ������ �� �ּҰ��� �����Ͽ�,
	// ���� �޸𸮸� ����Ű�� ����

	//int* ptr1 = new int;
	//int* ptr2 = ptr1;

	//���� ������ ��� ���� ��ü�� ���� ���� �޸� ������
	//�����ϰ� �ֱ� ������ �ϳ��� ��ü�� ���� �����ϰ� �Ǹ�
	//���� ������ ��ü�� �Բ� ������ ����
	//*ptr1 = 100;
	//*ptr2 = 999;

	//cout << "ptr1�� ī��Ű�� �� : " << *ptr1 << endl;
	//cout << "ptr2�� ī��Ű�� �� : " << *ptr2 << endl;

	//delete ptr2;
	//delete ptr1;

#pragma endregion

#pragma region ���� ����
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