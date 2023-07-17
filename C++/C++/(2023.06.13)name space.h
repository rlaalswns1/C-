#pragma once
#include <iostream>
using namespace std;

int data = 56;

#pragma region 이름공간
// 속성을 구분할 수 있도록 유효 범위를 설정하는 영역
//namespace A
//{
//	void Damage()
//	{
//		cout << "A개발자 Damage(  ) 함수" << endl;
//	}
//}
//
//namespace B
//{
//	void Damage()
//	{
//		cout << "B개발자 Damage(  ) 함수" << endl;
//	}
//}
#pragma endregion

//auto는 매개변수로 사용할 수 없음
void Volume(int x)
{

}

struct Monster
{

};

class Player
{
	// 속성
	// -> 변수 

	// 기능
	// -> 함수
};

int main()
{
#pragma region 범위 지정 연산자
	//여러 범위에서 사용되는 식별자를 구분하는데 사용하는 연산자

	//(범위 연산자) :: 

	//int data = 100;

	//범위 지정 연산자는 전역변수와 같은 이름의 지역 변수가 선언되었을때
	//가장 가까운 범위에 선언된 변수의 이름을 사용하는
	//범위 규칙이 존재하므로 전역변수가 호출 되지 않음
	//std::cout << "Heap 영역의 data의 값 : " << data << std::endl;
	//std::cout << "Data 영역의 data의 값 : " << ::data << std::endl;    
#pragma endregion

#pragma region 이름공간
	//A::Damage();
	//B::Damage();
#pragma endregion

#pragma region auto (자료형 추론)
	// 선언된 변수의 초기화 식을 사용하여 
	//해당 형식을 추론하도록 컴파일러에게 지시하는 기능

	//SDK:임포트 설치
	//API 함수(  )
	//클래스 반환 PhotonManager( ), PlayFab( ) 30~40개

	//                       = new PlayFab( );  앞과 일치할때만

	//auto decimal = 6.25;
	//auto value = 100;

	// auto를 사용할 때는 무조건 값을 넣어 주어야 함			
	// ex) auto b;

	//for (초기값; 조건식; 증감식)
	
	//범위 기반 for문 (foreach)

	//int table[5] = { 1,2,3,4,5 };

	//값에 의한 호출(foreach)
	//for (const auto & e : table)
	//{
	//	std::cout << e << std::endl;
	//}

	//for (int i = 0; i < 5; i++)
	//{
	//	std::cout << table[1] << std::endl;
	//}
#pragma endregion

#pragma region 클래스
	// 사용자 정의 데이터 유형으로 속성과
	//함수가 포함되엉 있으며, 클래스를 통해
	//객체를 생성하여 접근하고 사용할 수 있는 집합체

#pragma endregion

	return 0;
}