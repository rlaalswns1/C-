#pragma once
class iPhone
{
	//�Ӽ�
private:
	int volume;

	//���
public:
	//SETTER
	void SetControlSound(int volume)
	{
		this->volume = volume;
	}

	//GETTER
	int GetVolume();
};

