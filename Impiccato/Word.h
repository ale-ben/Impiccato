#pragma once

#include <string>

using namespace std;

class Word
{
private:
	string _word;
	int _wLength;
public:
	Word();
	Word(string word);
	bool isTheRightOne(char letter);
};

