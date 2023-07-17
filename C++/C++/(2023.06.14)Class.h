#pragma once
#include <iostream>
using namespace std;

class Player
{
	// 접근 지정자란?
	// 클래스 내부의 포함되어 있는 속성에 접근 범위를
	// 제한하는 지정자

	// 공개(public)
	//클래스 외부에서 어디서든지 접근할 수 있는 접근 제한자
public:
	const char* name;
	int data;

	void Information()
	{
		std::cout << "캐릭터 정보" << std::endl;
	}
	// 비공개(private)
	//클래스 내부에서만 속성을 접근할 수 있으며, 
	//클래스에 접근 지정자를 설정하지 않으면 비공개로 접근제한자가 설정됨
private:
	int hp;
	// 보호(protected)
	//클래스 내부와 자기가 상속하고 있는 클래스까지만
	//클래스의 속성을 접근할 수 있는 접근 제한자
protected:
	float transformX;

};

class Job : public Player
{
public:
	void Select()
	{
		transformX = 100.0f;
	}
};

int main()
{
#pragma region 클래스
	// 사용자 정의 데이터 유형으로 속성과
	//함수가 포함되엉 있으며, 클래스를 통해
	//객체를 생성하여 접근하고 사용할 수 있는 집합체
	//Player player1;
	//Player player2;
	//Player player3;

	//player.hp = 10;
	//player1.data = 0x12345678;
	//int* ptr = &player1.data;

	//player1.name = "Bard";
	//player1.Information();

	//cout << "player1의 크기 : " << sizeof(player1) << endl;
	//cout << "player2의 크기 : " << sizeof(player2) << endl;
	//cout << "player3의 크기 : " << sizeof(player3) << endl;

	//Player * ptr = new Player;
	//ptr->data = 35;
	//ptr->Information();

	//delete ptr;

	//ptr = nullptr;

	//if (ptr == nullptr)
	//{
	//	ptr = new Player;
	//}
	//ptr->data = 35;
	//cout << ptr << endl;

#pragma endregion


	return 0;
}