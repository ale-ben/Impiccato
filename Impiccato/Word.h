#pragma once

#include "gui.h"

using namespace std;

class Word
{
private:
	string _word, _letterUsed;
	int _wLength;
public:
	Word();
	Word(string word);
	bool isTheRightOne(string *pWord, char letter);
	int getWLength();
};