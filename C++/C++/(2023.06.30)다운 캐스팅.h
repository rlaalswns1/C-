#pragma once
#include <iostream>
#include "Sword.h"

using namespace std;

#pragma region �������� ���ø�
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
#pragma region �ٿ� ĳ����

    //Weapon* weapon = new Sword;
    //weapon->Attack();
    //weapon->Stat();

    // �ٿ� ĳ����
    //Sword* sptr = (Sword*)weapon;
    //sptr->Attack();
    //sptr->Stat();
#pragma endregion

#pragma region ��� �̴ϼȶ�����
   // Weapon weaponItem(10, 3.65f, 1500);
#pragma endregion

#pragma region ���� ���� ���ø�
   //Templateprintf(10, 20, 30);
   //Templateprintf(1, 'A', "String", 5, 6, 7);
#pragma endregion


    return 0;
}#pragma once
