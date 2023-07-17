#pragma once
#pragma once
#include <iostream>
#include <memory>
#include "Item.h"

using namespace std;

#pragma region ����Ʈ ������
// ������ó�� �����ϴ� Ŭ���� ���ø�����
// ����� ���� �޸𸮸� �ڵ����� �����ϴ� �������Դϴ�.
#pragma endregion

int main()
{
#pragma region unique_ptr ������
    // �ϳ��� �޸� ������ ����ų �� �ִ� �������Դϴ�.

  // ex) �ʱ�ȭ�ϴ� ���
   // std::unique_ptr<int> uniquePtr(new int(5));

    //uniquePtr�� ������ �ִ� �޸� ������(�������� �Ҵ��� �޸�)�� 
    //uniquePtr1���� �޸𸮼������� �Ѱ��ִ� ����
   // std::unique_ptr<int> uniquePtr1 = std::move(uniquePtr);

    //std::move() �Լ��� ��ü�� ���� �ҿ���� ������ �� ������,
    //��ü�� ������ ����ũ �����ʹ� �ƹ��͵� ����ų�� ������, �Ҹ��� ������ ó��
    //std::cout << *uniquePtr << std::endl;

    //*uniquePtr = 300;

   // std::cout << *uniquePtr << std::endl;

    //  ex 2)
    //  std::unique_ptr<int> uniquePtr = std::make_unique<int>(new int(5));

#pragma endregion

#pragma region shared_ptr ������
    //� �ϳ��� ��ü�� �����ϴ� ����Ʈ �������� ������ �����ϴ� ������

    //�����ϰ� �ִ� ����Ʈ �������� ���� ���� ī��Ʈ�ϰ� ��
    //���� ī��Ʈ(Reference Counting)
    //�ش� �޸𸮰� �����ϴ� �����Ͱ� ����� ��Ÿ���� ��

    //ù ��° �ʱ�ȭ ���
    //shared_ptr<int> shared_ptr(new int(999));

    //�� ��° �ʱ�ȭ ���
    //shared_ptr<Item> shared_ptr1 = std::make_shared<Item>();
    //shared_ptr<Item> shared_ptr1(new Item);

   // std::cout << shared_ptr1.use_count() << endl;

   // {
    //    shared_ptr<Item> shared_ptr2 = shared_ptr1;
    //    std::cout << shared_ptr1.use_count() << endl;
    //}
    //shared_ptr<Item> shared_ptr2 = shared_ptr1;

#pragma endregion

#pragma region weak_ptr ������
    //�ϳ��̻��� shared_ptr �ν��Ͻ��� �����ϴ� ��ü��
    //���� ������ ����������, ���� ī��Ʈ�� ���Ե��� �ʴ�
    //����Ʈ ������
    shared_ptr<Item> ptr1(new Item);
    shared_ptr<Item> ptr2(new Item);

    cout << "ptr1�� " << ptr1.use_count() << endl;
    cout << "ptr2�� " << ptr2.use_count() << endl;

    ptr1->ptr = ptr2;
    ptr2->ptr = ptr1;

    cout << "ptr1�� " << ptr1.use_count() << endl;
    cout << "ptr2�� " << ptr2.use_count() << endl;

#pragma endregion


    return 0;
}