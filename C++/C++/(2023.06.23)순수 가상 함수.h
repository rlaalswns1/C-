#pragma once
#include <iostream>
#include "Marine.h"
#include "Weapon.h"
#include "Sword.h"

using namespace std;

int main()
{
#pragma region 순수 가상함수
	//추상 클래스
	//하나의 순수	 가상 함수를 가지는 클래스는 추상 클래스로 정의
	//Unit unit;

	//추상 클래스의 경우 포인터 타입으로 사용가능
	//ex) Unit * ptr;

	//Marine marine;

	//marine.skill();

	//가상함수는 1개 이상의 가상함수를 포하는 클래스가 있을때
	//객체 주소에 가상함수 테이블을 추가
	//cout << "Marine의 크기 : " << sizeof(marine) << endl;
#pragma endregion

#pragma region 가상 소멸자
	//객체가 소멸될때 현재 참조하고 있는 객체와
	//상관 없이 모두 호출되는 소멸자

	//Weapon* ptr = nullptr;
	//ptr->Attack();

	// 상속된 객체가 해제될 때 하위 클래스의 소멸자가
	// 먼저 실행되고 상위 클래스의 소멸자가 실행되어야 
	// 하기 때문에 실행 시간에 메모리에 할당된
	// 객체를 확인하고 차례대로 소멸시켜야 합니다.

	//delete ptr;

#pragma endregion

#pragma region UP-Casting
	//하위 클래스의 정보를 담을 수 있는 객체에 상위클래스의
	//자료형을 부여해서, 상위클래스처럼 사용하는 것
#pragma endregion


	return 0;
}