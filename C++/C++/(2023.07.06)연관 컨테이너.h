#pragma once
#include <iostream>
#include <list>
#include<map>
#include<set>
using namespace std;

int main()
{
#pragma region ���� �����̳�
	//Key�� Valueó�� �����ִ� �����͸� �ϳ��� ������ �����ϴ� �����̳�

	//std::list
	/*
	list<int> list;

	list.push_front(100);
	list.push_back(45);
	list.push_back(33);
	list.push_back(11);
	list.push_back(7);

	//lierator
	std::list<int>::iterator iter;

	for (iter = list.begin(); iter != list.end(); iter++)
	{
		cout << "list�� �� : " << *iter << endl;
	}

	list.pop_front();
	list.pop_back();

	iter = list.begin();

	iter++;
	list.insert(iter, 99);
	list.erase(iter);

	cout << endl;

	for (iter = list.begin(); iter != list.end(); iter++)
	{
		cout << "list�� �� : " << *iter << endl;
	}
	*/

	//std::map
	/*
	map<const char*, int > map;

	// Item(name) (Price)

	map.insert(make_pair<const char*, int>("Sword", 1000));
	map.insert(make_pair<const char*, int>("Shoes", 500));

	std::map<const char*, int>::iterator mapiterator;

	for (mapiterator = map.begin(); mapiterator != map.end(); mapiterator++);
	{
		//mapiterator->first (KEY)
		//mapiterator->second (VALUE)
		cout << mapiterator->first << "Value : " << mapiterator->second << endl;
	}

	//map.find() KEY�� �˻��ϴ� �Լ�
	if (map.find("Sword") != map.end());
	{
		std::cout << "KEY�� �����մϴ�." << std::endl;
	}
	else
	{
		std::cout << "KEY�� �����Ͼʽ��ϴ�." << std::endl;
	}
	*/

	//std::set
	/*
	set<int> set;

	set.insert(10);
	set.insert(20);
	set.insert(30);

	//clear() : ��� ���Ҹ� �����ϴ� �Լ�
	set.clear();

	//set�� �ڵ����� ������ �Ͼ�ϴ�.
	for (auto & element : set)
	{
		cout << element << endl;
	}
	*/

#pragma endregion

	return 0;
}