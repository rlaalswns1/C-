#pragma once
class iPhone
{
	//속성
private:
	int volume;

	//기능
public:
	//SETTER
	void SetControlSound(int volume)
	{
		this->volume = volume;
	}

	//GETTER
	int GetVolume();
};

