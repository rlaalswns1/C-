#pragma once
#include<iostream>
#include <string>
using namespace std;




int main()
{
#pragma region 문자열 클래스(std::string)
	string string("문자열");
	std::string name;

	//std::cout << "string변수의 값" << string << endl;

	string = "클래스 파일";

	//cout << "string 변수의 값" << string << endl;

	//string = "클래스";

	//cout << "string 변수의 값" << string << endl;

	/*
	cout << "string의 값을 입력하세요.";
	getline(cin, string);

	cout << "name의 값을 입력하세요.";
	cin >> name;

	cout << "string 변수의 값 : " << string << endl;
	cout << "name 변수의 값 : " << name << endl;
	*/

	//1. 띄어쓰기를 했을 때 출력이 이상하게 되는 부분 (이해하기)
	//2. 이 문제점 해결 방안 찾기

#pragma endregion

	return 0;
}