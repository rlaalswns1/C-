#pragma once
#include <iostream>
using namespace std;

class Player
{
	// ���� �����ڶ�?
	// Ŭ���� ������ ���ԵǾ� �ִ� �Ӽ��� ���� ������
	// �����ϴ� ������

	// ����(public)
	//Ŭ���� �ܺο��� ��𼭵��� ������ �� �ִ� ���� ������
public:
	const char* name;
	int data;

	void Information()
	{
		std::cout << "ĳ���� ����" << std::endl;
	}
	// �����(private)
	//Ŭ���� ���ο����� �Ӽ��� ������ �� ������, 
	//Ŭ������ ���� �����ڸ� �������� ������ ������� ���������ڰ� ������
private:
	int hp;
	// ��ȣ(protected)
	//Ŭ���� ���ο� �ڱⰡ ����ϰ� �ִ� Ŭ����������
	//Ŭ������ �Ӽ��� ������ �� �ִ� ���� ������
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
#pragma region Ŭ����
	// ����� ���� ������ �������� �Ӽ���
	//�Լ��� ���ԵǾ� ������, Ŭ������ ����
	//��ü�� �����Ͽ� �����ϰ� ����� �� �ִ� ����ü
	//Player player1;
	//Player player2;
	//Player player3;

	//player.hp = 10;
	//player1.data = 0x12345678;
	//int* ptr = &player1.data;

	//player1.name = "Bard";
	//player1.Information();

	//cout << "player1�� ũ�� : " << sizeof(player1) << endl;
	//cout << "player2�� ũ�� : " << sizeof(player2) << endl;
	//cout << "player3�� ũ�� : " << sizeof(player3) << endl;

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