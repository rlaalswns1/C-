#include "Weapon.h"
using namespace std;

#pragma region 생성자
// 클래스의 인스턴스가 생성되는 시점에서 
// 자동으로 호출되는 특수한 멤버 함수
class Person
{
	// 생성자의 경우 객체가 생성될 때 단 한번만 호출되며,
	// 생성자는 반환형이 존재하지 않음

	// 그러므로, 생성자가 호출되지 전에는 객체에 대한
	// 메모리는 할당되지 않음

	int age;

public: // 자동 호출로 무조건 써 줘야함

	// default : 기본 생성자로 명시적으로 지정하는 키워드
	Person() = default;

	Person(int x)
	{
		age = x;
		cout << "생성자 호출" << endl;
	}

#pragma region 복사 생성자
	//같은 객체를 복사하여 생성시킬 때 호출되는 생성자

	Person(Person& clone)
	{
		cout << "복사 생성자 호출" << endl;
	}
#pragma endregion


	// 소멸자 
	// 객체가 소멸될 때 자동으로 실행되는 클래스의 멤보 함수
	~Person()
	{
		// 소멸자는 객체가 메모리에서 해제될 때
		// 단 한번만 호출되며, 소멸자에게는 매개변수를
		// 생성하며 사용 불가

		cout << "Person 삭제" << endl;
	}
};

//class Weapon
//{
//public:
//	// 컴파일러가 알아서 기본 생성자를 생성
//	// weapon() { } <- 기본 생성자
//
//	void Stat()
//	{
//		cout << "무기 스텟 정보" << endl;
//	}
//
//};
#pragma endregion

#pragma region 기본 매개변수
// 매개변수에 기본값을 선언하여 함수가 호출될 때
// 인수 없이 호출 될 수 있도록 설정하는 매개변수

void Damage(int x = 100)
{
	cout << "x의 값 : " << x << endl;
}

//기본 매개변수를 선언할 떄는 오른쪽부터 정의함
void Calculator(int x, int y = 300)
{
	cout << "x의 값 : " << x << endl;
	cout << "y의 값 : " << y << endl;
}

#pragma endregion

int main()
{
#pragma region 생/소멸자
	Person animal1;

	Person animal2 = animal2;

	Weapon weapon;

	weapon.Stat();
	Person* aptr = new Person(10);

	delete aptr;

	int a = 10;
	int b(0);
#pragma endregion

#pragma region 기본 매개변수
	Damage(999);
	Calculator(1);
#pragma endregion

	//Weapon weapon;

	return 0;
}#pragma once
