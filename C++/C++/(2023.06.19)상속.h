#pragma once
#include <iostream>
#include "iPhone.h"
using namespace std;

#pragma region ���
//���� Ŭ������ �Ӽ��� ���� Ŭ������ 
//����� �� �ֵ��� �������ִ� ���

class Parent
{
public:
	Parent()
	{
		cout << "Parent() Ŭ���� ����" << endl;
	}

	~Parent()
	{
		cout << "Parent() Ŭ���� �Ҹ�" << endl;
	}
	void Speak()
	{
		//this ������
		//�ڱ� �ڽ��� ����Ű�� ������
		this->a = a;

		//this�����ʹ� ȣ��� ��ü�� ����Ű�� ��� ������
		//��������� �ڷ����̹Ƿ� ������ ��ü�� �ٸ�����
		//����Ű���� �� �� ����
		cout << this << endl;
		cout << "speak(  )" << endl;
	}

	int a;
protected:
	int b;
private:
	int c;
};

class Child : public Parent
{
public:
	Child()
	{
		//public ���
		/*
		//a = 100;
		//b = 200;
		//c = 300;
		*/

		//protected ���
		/*
		a = 300;
		b = 200;
		c = 100;
		*/

		cout << "child () Ŭ���� ����" << endl;
	}
	~Child()
	{
		cout << "child () Ŭ���� �Ҹ�" << endl;
	}
	int d;
};
#pragma endregion

int main()
{
#pragma region ���
	//Child child;

	//public ��� ��
	//child.a = 999;

	//protected�� ��� �� ���� �� �� �ִ� ��� ������ �������� �ʽ��ϴ�.

	//private�� ��� �� ���� �� �� �ִ� ��� ������ �������� �ʽ��ϴ�.
#pragma endregion

#pragma region this ������
	//Parent parent1;
//parent1.Speak();

//Parent parent2;
//parent2.Speak();

//Parent parent3;
//parent3.Speak();
#pragma endregion

#pragma region Ŭ������ �޸� ũ��
		//Parent p1; //int (a), (b), (c)

	//Child c1;//int (d)

	//cout << "Parent �������� ũ�� : " << sizeof(p1) << endl;
	//cout << "Child �������� ũ�� : " << sizeof(c1) << endl;
#pragma endregion

	iPhone iPhone14;

	iPhone14.SetControlSound(5);

	cout << iPhone14.GetVolume() << endl;


	return 0;
}