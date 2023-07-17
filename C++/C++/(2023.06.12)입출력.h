#include <iostream> // i : input - o : output'

// C언어 ( 출력 : printf(), 입력 : scanf_s())
// C++언어 ( std::cout :  출력, std::cin : 입력 )

// 스트림이란?
// 시간의 흐름에 따라 연속적으로 발생하는 데이터의 흐름

void Function(const int& x)
{
	std::cout << "x의 값 : " << std::endl;
}

int main()
{
#pragma region C++입출력
	//char a = 'A';
	//int b = 100;
	//float c = 9.81f;

	// << : 삽입연산자
	// 자신이 참조한 값을 반환하는 연산자

	//std::endl : 개행
	//std::cout << (int)a << std::endl;
	//std::cout << b << " / " << c << std::endl;
	//
	//int data = 0;
	//int data1 = 0;

	// >> : 주출 연산자
	//버퍼에 저장한 다음 NULL 문자까지만 버퍼 안의 내용을 전달하는 연산자;;
	//std::cin >> data >> data1;
	//std::cout << "data의 값 : " << data << std::endl;
#pragma endregion

#pragma region C++동적 할당
	// C언어
	// malloc()
	//free()

	// C++
	// new 메모리 할당
	// delete 메모리 해제

	//          ptr                  동적할당한 메모리
	// [ 4 byte 메모리 시작 주소 ] ------> [][][][] 
	//int* ptr = new int;

	// new 객체() 생성자 호출
	//  

	// malloc() 생성자가 호출되지 않음
	//

	//*ptr = 100;

	//delete ptr;

						 // 4byte 4byte  4byte
	//int* p = new int[3]; //[    ] [   ]  [   ]

	//p[0] = 100;
	//p[1] = 200;
	//p[2] = 300;

	//delete [] p;

#pragma endregion

#pragma region 참조자
	//어떤 변수의 메모리 공간에 또다른 이름

	//10 MB
	//int value = 10;

	// 참조자 선언
	//int& other = value;
	//int& other1 = value;


	//std::cout << "value의 값 : " << value << std::endl;
	//std::cout << "other의 값 : " << other << std::endl;

	//other = 300;
	//other1 = 300;

	//Function(value);

	//std::cout << "value의 값 : " << value << std::endl;
	//std::cout << "other의 값 : " << other << std::endl;

	//& : 

#pragma endregion

	return 0;
}#pragma once
