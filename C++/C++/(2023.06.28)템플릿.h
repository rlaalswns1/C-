#pragma once
#pragma once
#include <iostream>
#include "Item.h"
using namespace std;

#pragma region ���ø�
// �Լ��� ũ������ �ٽ� �ۼ����� �ʾƵ�
// �� ���� �ڷ������� ������ �� �ֵ��� ���ִ� ����Դϴ�.

template<typename T>
void DataType(T value)
{
    std::cout << value << std::endl;
}

#pragma endregion

#pragma region ���ø��� Ư��ȭ
// ���ø� �Լ��� ���������, Ư�� �Ű������� ���ؼ���
// ���� ó���� �ϱ� ���� ����ϴ� ����Դϴ�.

//template<typename T>
//int DataSize(T data)
//{
//    return sizeof(data);
//}
//
//template<>
//int DataSize(const char* data)
//{
//    return strlen(data) + 1;
//}

#pragma endregion

template <typename T1, typename T2>
class Dictionary
{
private:
    T1 key;
    T2 value;

public:
    Dictionary(T1 key, T2 Value)
    {
        this->key = key;
        this->value = value;
    }

    void ContainsKey()
    {
        cout << key << endl;
    }

    void ContainsValue()
    {
        cout << value << endl;
    }
};

int main()
{
#pragma region ���ø�
    // DataType('A');
    // DataType(10);
    // DataType(3.141592f);
    // DataType(4.75);   
#pragma endregion

#pragma region ���ø� Ư��ȭ
    // int integer = 10;
    // double decimal = 6.75;
    // const char * content = "She is Happy";
    // 
    // std::cout << "integer ������ ũ�� : " << DataSize(integer) << std::endl;
    // std::cout << "decimal ������ ũ�� : " << DataSize(decimal) << std::endl;
    // std::cout << "content ������ ũ�� : " << DataSize(content) << std::endl;
#pragma endregion

#pragma region �۷��� ���ø�
   // Dictionary<char, int> dictionary('A', 100);
   //
   // dictionary.ContainsKey();
   // dictionary.ContainsValue();
   //
   // Dictionary<const char*, double> dictionary2("Table", 99.65);
   //
   // dictionary2.ContainsKey();
   // dictionary2.ContainsValue();
#pragma endregion

    //Item item;

    //item.Search(100);

    Item::Upgrade();

    return 0;
}


