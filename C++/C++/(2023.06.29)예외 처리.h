#pragma once
#include <iostream>
#include "Tiger.h"
using namespace std;




int main()
{
#pragma region ���� ó��
	//int a;
	//int b;
	//int result = 0;

	//cin >> a >> b;

	//int dataBass[5] = { 1,2,3,4,5 };

	//try
	//{
	//	if (a == 0 || b == 0)
	//	{
	//		throw invalid_argument("������ 0 X";
	//	}
	//	cout << "����մϴ�" << endl;
	//	result = a / b;

	//	//dataBass[7] = 100;
	//}
	//catch (const std::exception& error)
	//{
	//	cout << error.what() << endl;
	//}
	//catch (int errorID)
	//{
	//	cout << errorID << endl;
	//}
#pragma endregion

#pragma region final
//Ŭ������ ���� �Լ��� ���� Ŭ�������� �������� ��  ������ �����ϴ� ���
	//Animal animal;
	//animal.Action();

	//Carnivore carnivore;
	//carnivore.Action();

	//Tiger tiger;
	//tiger.Action();
#pragma endregion


#pragma region Friend
	//�������� ������ Ŭ�������� ��� ������
	//������ �� �ֵ��� �����ϴ� ���

	Lion lion;
	Tiger tiger1;

	tiger1.FriendFunction(lion);

#pragma endregion

	return 0;
}