#pragma once
#include <iostream>
#include <memory>
using namespace std;

static int itemCode;

class Item
{
public:
	std::weak_ptr<Item> ptr;

	//� �ڷ������� Ŭ���� ��� �Լ��� ��üȭ�ؾ��ϴ��� �𸣱� ������ �޸𸮿� ����X
	template <typename T>
	void Search(T data);

	//��������� ������X
	//cpp ���� ������ include �� ������� ������ ���� �Ǳ⸸ ��
	//������ cpp���ϵ��� ���������� ������ �� ���Ŀ� ��������
	//�Ϸ�� ���� ������Ʈ ���� cpp���ϳ��� ��ŷ��

	//���� �Լ�
	static void Upgrade()
	{
		itemCode = 10153;
		cout << "������ ���׷��̵�" << endl;
	}

	Item();
	~Item();
};


template<typename T>
inline void Item::Search(T data)
{
	cout << data << endl;
}
