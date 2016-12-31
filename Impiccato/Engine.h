#pragma once

#include <string>

#include "Word.h"

using namespace std;

class Engine
{
private:
	Word word;
	int _length;
public:
	Engine(Word wo);
	bool checkLetter(char lett);
};

