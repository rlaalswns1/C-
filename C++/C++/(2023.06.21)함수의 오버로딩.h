#include <iostream>
#include"Vector3.h"
using namespace std;

#pragma region ���׼�
// �������� ���� ���� ��ü�� ������ �����
// ���� �ٸ� ������� ó�� �� �� �ִ� ���
#pragma endregion

#pragma region �Լ��� �����ε�
	// ���� �̸��� �Լ��� �Ű������� �ڷ����� �Ű�������
	// ���� �����Ͽ� ���� ���� ������ �� �ִ� ���

//void Add(int x, int y)
//{
//	cout << x + y << endl;
//}

//�Լ��� �����ε��� ��� �Լ��� �Ű������� �����ϴ� �μ��� ���·� ����
//ȣ���ϹǷ�, ��ȯ������ �Լ��� �����ε� ����X
//void Add(int x, int y)
//{
//	return x + y;
//}

//void Add(float x, float y)
//{
//	cout << x + y << endl;
//}
#pragma endregion



int main()
{
#pragma region �Լ��� �����ε�
	//Add(10, 20);
	//Add(10.5f, 9.85f);
#pragma endregion

#pragma region ������ �����ε�
	//Vector3 v1(2, 2, 2);
	//v1.Print();

	//Vector3 v2(3, 3, 3);
	//v2.Print();

	//Vector3 v3 = v1 + v2;

	//���� ������
	// ++, --

	//v4(1, 1, 1)
	//++(++v4) -> 

	Vector3 v4(1, 1, 1);

	++(++v4);

	v4.Print();

#pragma endregion


	return 0;
}#pragma once
