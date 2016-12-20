#pragma once

#include <iostream>
#include <string>

#include "Word.h"

using namespace std;

class Engine
{
private:
	int length;
	char letter;
public:
	Engine(int leng);
	~Engine();
	bool checkLetter(char lett);
};

