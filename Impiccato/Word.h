#pragma once

#include "gui.h"

using namespace std;

class Word
{
private:
	string _word;
	int _wLength;
public:
	Word();
	Word(string word);
	int isTheRightOne(string *pWord, char letter);
	int getWLength();
};