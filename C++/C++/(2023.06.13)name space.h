#pragma once
#include <iostream>
using namespace std;

int data = 56;

#pragma region �̸�����
// �Ӽ��� ������ �� �ֵ��� ��ȿ ������ �����ϴ� ����
//namespace A
//{
//	void Damage()
//	{
//		cout << "A������ Damage(  ) �Լ�" << endl;
//	}
//}
//
//namespace B
//{
//	void Damage()
//	{
//		cout << "B������ Damage(  ) �Լ�" << endl;
//	}
//}
#pragma endregion

//auto�� �Ű������� ����� �� ����
void Volume(int x)
{

}

struct Monster
{

};

class Player
{
	// �Ӽ�
	// -> ���� 

	// ���
	// -> �Լ�
};

int main()
{
#pragma region ���� ���� ������
	//���� �������� ���Ǵ� �ĺ��ڸ� �����ϴµ� ����ϴ� ������

	//(���� ������) :: 

	//int data = 100;

	//���� ���� �����ڴ� ���������� ���� �̸��� ���� ������ ����Ǿ�����
	//���� ����� ������ ����� ������ �̸��� ����ϴ�
	//���� ��Ģ�� �����ϹǷ� ���������� ȣ�� ���� ����
	//std::cout << "Heap ������ data�� �� : " << data << std::endl;
	//std::cout << "Data ������ data�� �� : " << ::data << std::endl;    
#pragma endregion

#pragma region �̸�����
	//A::Damage();
	//B::Damage();
#pragma endregion

#pragma region auto (�ڷ��� �߷�)
	// ����� ������ �ʱ�ȭ ���� ����Ͽ� 
	//�ش� ������ �߷��ϵ��� �����Ϸ����� �����ϴ� ���

	//SDK:����Ʈ ��ġ
	//API �Լ�(  )
	//Ŭ���� ��ȯ PhotonManager( ), PlayFab( ) 30~40��

	//                       = new PlayFab( );  �հ� ��ġ�Ҷ���

	//auto decimal = 6.25;
	//auto value = 100;

	// auto�� ����� ���� ������ ���� �־� �־�� ��			
	// ex) auto b;

	//for (�ʱⰪ; ���ǽ�; ������)
	
	//���� ��� for�� (foreach)

	//int table[5] = { 1,2,3,4,5 };

	//���� ���� ȣ��(foreach)
	//for (const auto & e : table)
	//{
	//	std::cout << e << std::endl;
	//}

	//for (int i = 0; i < 5; i++)
	//{
	//	std::cout << table[1] << std::endl;
	//}
#pragma endregion

#pragma region Ŭ����
	// ����� ���� ������ �������� �Ӽ���
	//�Լ��� ���ԵǾ� ������, Ŭ������ ����
	//��ü�� �����Ͽ� �����ϰ� ����� �� �ִ� ����ü

#pragma endregion

	return 0;
}