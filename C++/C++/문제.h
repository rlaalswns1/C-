#pragma once
// ���� ����	
// ��,�� �� ���� �� �ִ� �����̳�
/*
std::vector<const char*> container;

// key �Է� ����
char key = 0;

// ������ ������Ʈ�� ��
int spawnCount = 5;

// �������� ������ ����
int random = 0;

srand(time(NULL));

for (int i = 0; i < spawnCount; i++)
{
	random = rand() % 4 + 1;

	switch (random)
	{
	case 1: container.push_back("��");
		break;
	case 2: container.push_back("��");
		break;
	case 3: container.push_back("��");
		break;
	case 4:  container.push_back("��");
		break;
	}
}

while (true)
{
	if (life <= 0)
	{
		std::cout << "���ӿ��� �й��߽��ϴ�." << std::endl;
		break;
	}

	std::cout << "���� ���� ��� : " << life << std::endl;


	for (int i = 0; i < container.size(); i++)
	{
		std::cout << container[i] << " ";
	}

	Keyboard(key, container);

	system("cls");

	if (container.size() == 0)
	{
		std::cout << "ȭ��ǥ�� �� ���߾����ϴ�." << std::endl;
		break;
	}
}
*/