#pragma once
#include <iostream>
#include <memory>
using namespace std;

static int itemCode;

class Item
{
public:
	std::weak_ptr<Item> ptr;

	//어떤 자료형으로 클래스 멤버 함수를 구체화해야하는지 모르기 때문에 메모리에 정의X
	template <typename T>
	void Search(T data);

	//헤더파일은 컴파일X
	//cpp 파일 내에서 include 한 헤더파일 내용이 복사 되기만 함
	//각각의 cpp파일들이 독립적으로 컴파일 된 이후에 컴파일이
	//완료된 같은 프로젝트 내의 cpp파일끼리 링킹함

	//정적 함수
	static void Upgrade()
	{
		itemCode = 10153;
		cout << "아이템 업그레이드" << endl;
	}

	Item();
	~Item();
};


template<typename T>
inline void Item::Search(T data)
{
	cout << data << endl;
}
