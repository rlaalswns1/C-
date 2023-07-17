#pragma once
// 리듬 게임	
// ↑,← 를 담을 수 있는 컨테이너
/*
std::vector<const char*> container;

// key 입력 변수
char key = 0;

// 생성될 오브젝트의 수
int spawnCount = 5;

// 랜덤으로 설정될 변수
int random = 0;

srand(time(NULL));

for (int i = 0; i < spawnCount; i++)
{
	random = rand() % 4 + 1;

	switch (random)
	{
	case 1: container.push_back("↑");
		break;
	case 2: container.push_back("←");
		break;
	case 3: container.push_back("→");
		break;
	case 4:  container.push_back("↓");
		break;
	}
}

while (true)
{
	if (life <= 0)
	{
		std::cout << "게임에서 패배했습니다." << std::endl;
		break;
	}

	std::cout << "현재 나의 목숨 : " << life << std::endl;


	for (int i = 0; i < container.size(); i++)
	{
		std::cout << container[i] << " ";
	}

	Keyboard(key, container);

	system("cls");

	if (container.size() == 0)
	{
		std::cout << "화살표를 다 맞추었습니다." << std::endl;
		break;
	}
}
*/