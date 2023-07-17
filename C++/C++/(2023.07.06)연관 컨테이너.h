#pragma once
#include <iostream>
#include <list>
#include<map>
#include<set>
using namespace std;

int main()
{
#pragma region 연관 컨테이너
	//Key와 Value처럼 관련있는 데이터를 하나의 쌍으로 저장하는 컨테이너

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
		cout << "list의 값 : " << *iter << endl;
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
		cout << "list의 값 : " << *iter << endl;
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

	//map.find() KEY를 검색하는 함수
	if (map.find("Sword") != map.end());
	{
		std::cout << "KEY가 존재합니다." << std::endl;
	}
	else
	{
		std::cout << "KEY가 존재하않습니다." << std::endl;
	}
	*/

	//std::set
	/*
	set<int> set;

	set.insert(10);
	set.insert(20);
	set.insert(30);

	//clear() : 모든 원소를 삭제하는 함수
	set.clear();

	//set은 자동으로 정렬이 일어납니다.
	for (auto & element : set)
	{
		cout << element << endl;
	}
	*/

#pragma endregion

	return 0;
}