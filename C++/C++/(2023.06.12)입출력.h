#include <iostream> // i : input - o : output'

// C��� ( ��� : printf(), �Է� : scanf_s())
// C++��� ( std::cout :  ���, std::cin : �Է� )

// ��Ʈ���̶�?
// �ð��� �帧�� ���� ���������� �߻��ϴ� �������� �帧

void Function(const int& x)
{
	std::cout << "x�� �� : " << std::endl;
}

int main()
{
#pragma region C++�����
	//char a = 'A';
	//int b = 100;
	//float c = 9.81f;

	// << : ���Կ�����
	// �ڽ��� ������ ���� ��ȯ�ϴ� ������

	//std::endl : ����
	//std::cout << (int)a << std::endl;
	//std::cout << b << " / " << c << std::endl;
	//
	//int data = 0;
	//int data1 = 0;

	// >> : ���� ������
	//���ۿ� ������ ���� NULL ���ڱ����� ���� ���� ������ �����ϴ� ������;;
	//std::cin >> data >> data1;
	//std::cout << "data�� �� : " << data << std::endl;
#pragma endregion

#pragma region C++���� �Ҵ�
	// C���
	// malloc()
	//free()

	// C++
	// new �޸� �Ҵ�
	// delete �޸� ����

	//          ptr                  �����Ҵ��� �޸�
	// [ 4 byte �޸� ���� �ּ� ] ------> [][][][] 
	//int* ptr = new int;

	// new ��ü() ������ ȣ��
	//  

	// malloc() �����ڰ� ȣ����� ����
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

#pragma region ������
	//� ������ �޸� ������ �Ǵٸ� �̸�

	//10 MB
	//int value = 10;

	// ������ ����
	//int& other = value;
	//int& other1 = value;


	//std::cout << "value�� �� : " << value << std::endl;
	//std::cout << "other�� �� : " << other << std::endl;

	//other = 300;
	//other1 = 300;

	//Function(value);

	//std::cout << "value�� �� : " << value << std::endl;
	//std::cout << "other�� �� : " << other << std::endl;

	//& : 

#pragma endregion

	return 0;
}#pragma once
