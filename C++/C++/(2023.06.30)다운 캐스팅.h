#pragma once
#include <iostream>
#include "Sword.h"

using namespace std;

#pragma region 가변길이 템플릿
template <typename T, typename... Types>
void Templateprintf(T arg)
{
    cout << arg << ",";
}

template <typename T, typename... Types>
void Templateprintf(T arg, Types... args)
{
    cout << arg << ",";
    Templateprintf(args...);
    cout << endl;
}
#pragma endregion


int main()
{
#pragma region 다운 캐스팅

    //Weapon* weapon = new Sword;
    //weapon->Attack();
    //weapon->Stat();

    // 다운 캐스팅
    //Sword* sptr = (Sword*)weapon;
    //sptr->Attack();
    //sptr->Stat();
#pragma endregion

#pragma region 멤버 이니셜라이즈
   // Weapon weaponItem(10, 3.65f, 1500);
#pragma endregion

#pragma region 가변 길이 템플릿
   //Templateprintf(10, 20, 30);
   //Templateprintf(1, 'A', "String", 5, 6, 7);
#pragma endregion


    return 0;
}#pragma once
