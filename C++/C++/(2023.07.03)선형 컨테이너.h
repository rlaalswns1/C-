#pragma once
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <time.h>

// STL <array ���̺귯��>
#include <array>

// STL <vector ���̺귯��>
#include <vector>

#include <deque>

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

using namespace std;

// �����
int life = 5;

void Keyboard(char key, std::vector<const char*>& container)
{

	key = _getch();

	if (key == -32)
	{
		key = _getch();
	}

	switch (key)
	{
	case UP:
		if (container.back() == "��")
		{
			container.pop_back();
		}
		else
		{
			life--;
		}
		break;
	case LEFT:
		if (container.back() == "��")
		{
			container.pop_back();
		}
		else
		{
			life--;
		}
		break;
	case RIGHT:
		if (container.back() == "��")
		{
			container.pop_back();
		}
		else
		{
			life--;
		}
		break;
	case DOWN:
		if (container.back() == "��")
		{
			container.pop_back();
		}
		else
		{
			life--;
		}
		break;
	default:
		break;
	}
}


int main()
{
#pragma region STL ǥ�� ���ø� ���̺귯��
	// C++���� ����� �� �ִ� �����̳� class�� �˰�����
	// �Ϲ�ȭ ���Ѽ� ����� �� �ִ� �ڷᱸ���� �����ϴ� ���̺귯���Դϴ�.

	// std::array
	/*
	std::array<int, 5> STLarray {1,2,3,4,5};

	STLarray[0] = 10;
	std::cout << "STLarray�� ũ�� : " << STLarray.size() << std::endl;
	*/

	// std::vector
	/*
	std::vector<int> vector;
	vector.push_back(10);
	vector.push_back(20);
	vector.push_back(30);
	vector.push_back(40);
	vector.push_back(50);
	vector.push_back(60);
	vector.push_back(70);

	vector.pop_back();
	vector.pop_back();
	vector.pop_back();
	vector.pop_back();
	vector.pop_back();

	std::cout << "capacity = "  << vector.capacity() << std::endl;

	for (int i = 0; i < vector.size(); i++)
	{
		std::cout << vector[i] << std::endl;
	}
	*/

	/*std::deque

	std::deque<int> deque;

	deque.push_back(10);
	deque.push_front(20);

	deque.pop_front();

	//empty() : �����̳ʰ� ������� Ȯ���ϴ� �Լ�
	//����ٸ� (true) 1�� ��ȯ
	//������� ������ (false) 0�� ��ȯ
	cout << deque.empty() << endl;

	for (int i = 0; i < deque.size(); i++)
	{
		cout << deque[i] << endl;
	}
	*/

	// ���� ����	
	// ��,�� �� ���� �� �ִ� �����̳�
	/*
	std::vector<const char*> container;

	// key �Է� ����
	char key = 0;

	// ������ ������Ʈ�� ��
	int spawnCount = 5;

	// �������� ������ ����
	int random = 0;

	srand(time(NULL));

	for (int i = 0; i < spawnCount; i++)
	{
		random = rand() % 4 + 1;

		switch (random)
		{
		case 1: container.push_back("��");
			break;
		case 2: container.push_back("��");
			break;
		case 3: container.push_back("��");
			break;
		case 4:  container.push_back("��");
			break;
		}
	}

	while (true)
	{
		if (life <= 0)
		{
			std::cout << "���ӿ��� �й��߽��ϴ�." << std::endl;
			break;
		}

		std::cout << "���� ���� ��� : " << life << std::endl;


		for (int i = 0; i < container.size(); i++)
		{
			std::cout << container[i] << " ";
		}

		Keyboard(key, container);

		system("cls");

		if (container.size() == 0)
		{
			std::cout << "ȭ��ǥ�� �� ���߾����ϴ�." << std::endl;
			break;
		}
	}
	*/




#pragma endregion




	return 0;
}
#pragma once
