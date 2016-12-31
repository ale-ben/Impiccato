#pragma once

#include <string>

using namespace std;

class Word
{
private: 
	string word;
public:
	Word();
	Word(string w);
	char getLetter(int lNum);
	int getWordLength();
};

