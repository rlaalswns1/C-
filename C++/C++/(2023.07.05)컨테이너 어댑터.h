#pragma once
#include <iostream>
#include <queue>
#include <stack>
#include<vector>

using namespace std;

int main()
{
#pragma region �����̳� �����
	//���� �����̳��� �������̽��� �����Ͽ� ���� �����
	//���ѵǰų� ������ �����̳�

	//std::queue
	/*
	queue<int> queue;

	queue.push(10);
	queue.push(20);
	queue.push(30);
	queue.push(40);
	queue.push(50);

	//queue.pop();//�����͸� ����

	//cout << queue.front() << endl;

	//10 20 30 40 50

	while (queue.empty() == false)
	{
		cout << queue.front() << endl;
		queue.pop();

	}

	//�����̳ʿ� �����Ͱ� ���� �� pop()�� �õ��ϸ� ��Ÿ�� ����
	*/

	//std::swap
	/*
	int a = 10;
	int b = 20;

	swap(a, b);

	cout << "a�� �� : " << a << endl;
	cout << "b�� �� : " << b << endl;
	*/

	//std::stack
	/*
	stack<int> stack;

	stack.push(10);
	stack.push(20);
	stack.push(30);
	stack.push(40);
	stack.push(50);

	while (stack.size() != 0)
	{
		cout << stack.top() << endl;
		stack.pop();
	}
	*/

	//std::iterator�ݺ���
	/*
	vector<int> vector;

	vector.push_back(10);//10
	vector.push_back(20);//10 20
	vector.push_back(30);//10 20 30

	std::vector<int>::iterator iter;

	vector.insert(vector.begin() + 2, 999);

	vector.erase(vector.begin() + 3);

	//iter�� ����Ű�� ���� ����ϼ���.

	for (iter = vector.begin(); iter != vector.end(); iter++)
	{
		cout << *iter << endl;
	}
	*/

#pragma endregion

	return 0;
}