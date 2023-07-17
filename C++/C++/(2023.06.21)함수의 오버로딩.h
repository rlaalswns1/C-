#include <iostream>
#include"Vector3.h"
using namespace std;

#pragma region 다항성
// 여러개의 서로 다은 객체가 동일한 기능을
// 서로 다른 방법으로 처리 할 수 있는 기능
#pragma endregion

#pragma region 함수의 오버로딩
	// 같은 이름의 함수를 매개변수의 자료형과 매개변수의
	// 수로 구분하여 여러 개를 선언할 수 있는 기능

//void Add(int x, int y)
//{
//	cout << x + y << endl;
//}

//함수의 오버로딩의 경우 함수의 매개변수에 전달하는 인수의 형태로 보고
//호출하므로, 반환형으로 함수의 오버로딩 생성X
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
#pragma region 함수의 오버로딩
	//Add(10, 20);
	//Add(10.5f, 9.85f);
#pragma endregion

#pragma region 연산자 오버로딩
	//Vector3 v1(2, 2, 2);
	//v1.Print();

	//Vector3 v2(3, 3, 3);
	//v2.Print();

	//Vector3 v3 = v1 + v2;

	//단항 연산자
	// ++, --

	//v4(1, 1, 1)
	//++(++v4) -> 

	Vector3 v4(1, 1, 1);

	++(++v4);

	v4.Print();

#pragma endregion


	return 0;
}#pragma once
