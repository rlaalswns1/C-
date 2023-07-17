#include "Weapon.h"
using namespace std;

#pragma region ������
// Ŭ������ �ν��Ͻ��� �����Ǵ� �������� 
// �ڵ����� ȣ��Ǵ� Ư���� ��� �Լ�
class Person
{
	// �������� ��� ��ü�� ������ �� �� �ѹ��� ȣ��Ǹ�,
	// �����ڴ� ��ȯ���� �������� ����

	// �׷��Ƿ�, �����ڰ� ȣ����� ������ ��ü�� ����
	// �޸𸮴� �Ҵ���� ����

	int age;

public: // �ڵ� ȣ��� ������ �� �����

	// default : �⺻ �����ڷ� ��������� �����ϴ� Ű����
	Person() = default;

	Person(int x)
	{
		age = x;
		cout << "������ ȣ��" << endl;
	}

#pragma region ���� ������
	//���� ��ü�� �����Ͽ� ������ų �� ȣ��Ǵ� ������

	Person(Person& clone)
	{
		cout << "���� ������ ȣ��" << endl;
	}
#pragma endregion


	// �Ҹ��� 
	// ��ü�� �Ҹ�� �� �ڵ����� ����Ǵ� Ŭ������ �⺸ �Լ�
	~Person()
	{
		// �Ҹ��ڴ� ��ü�� �޸𸮿��� ������ ��
		// �� �ѹ��� ȣ��Ǹ�, �Ҹ��ڿ��Դ� �Ű�������
		// �����ϸ� ��� �Ұ�

		cout << "Person ����" << endl;
	}
};

//class Weapon
//{
//public:
//	// �����Ϸ��� �˾Ƽ� �⺻ �����ڸ� ����
//	// weapon() { } <- �⺻ ������
//
//	void Stat()
//	{
//		cout << "���� ���� ����" << endl;
//	}
//
//};
#pragma endregion

#pragma region �⺻ �Ű�����
// �Ű������� �⺻���� �����Ͽ� �Լ��� ȣ��� ��
// �μ� ���� ȣ�� �� �� �ֵ��� �����ϴ� �Ű�����

void Damage(int x = 100)
{
	cout << "x�� �� : " << x << endl;
}

//�⺻ �Ű������� ������ ���� �����ʺ��� ������
void Calculator(int x, int y = 300)
{
	cout << "x�� �� : " << x << endl;
	cout << "y�� �� : " << y << endl;
}

#pragma endregion

int main()
{
#pragma region ��/�Ҹ���
	Person animal1;

	Person animal2 = animal2;

	Weapon weapon;

	weapon.Stat();
	Person* aptr = new Person(10);

	delete aptr;

	int a = 10;
	int b(0);
#pragma endregion

#pragma region �⺻ �Ű�����
	Damage(999);
	Calculator(1);
#pragma endregion

	//Weapon weapon;

	return 0;
}#pragma once
