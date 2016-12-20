#pragma once

#include <iostream>
#include <string>

using namespace std;

class Word
{
private: 
	string word;
public:
	Word();
	Word(string word);
	char getLetter(int lNum);
	int getWordLength();
};

