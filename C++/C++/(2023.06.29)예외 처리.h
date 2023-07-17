#pragma once
#include <iostream>
#include "Tiger.h"
using namespace std;




int main()
{
#pragma region 예외 처리
	//int a;
	//int b;
	//int result = 0;

	//cin >> a >> b;

	//int dataBass[5] = { 1,2,3,4,5 };

	//try
	//{
	//	if (a == 0 || b == 0)
	//	{
	//		throw invalid_argument("제수는 0 X";
	//	}
	//	cout << "계산합니다" << endl;
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
//클래스나 가상 함수를 하위 클래스에서 제정의할 수  없도록 설정하는 기능
	//Animal animal;
	//animal.Action();

	//Carnivore carnivore;
	//carnivore.Action();

	//Tiger tiger;
	//tiger.Action();
#pragma endregion


#pragma region Friend
	//수평적인 관계의 클래스간의 멤버 변수를
	//공유할 수 있도록 설정하는 기능

	Lion lion;
	Tiger tiger1;

	tiger1.FriendFunction(lion);

#pragma endregion

	return 0;
}