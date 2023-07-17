#pragma once
#include "Keyboard.h"

Keyboard::Keyboard()
{
	std::cout << "keyboard»ý¼ºÀÚ" << std::endl;
}

void Keyboard::Input(char character)
{
	this->character = character;

	std::cout << character << std::endl;
}