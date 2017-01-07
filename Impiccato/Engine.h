#pragma once

#include <string>

using namespace std;

class Word
{
private:
	string _word;
public:
	Word();
	Word(string w);
	char getLetter(int lNum);
	int getWordLength();
};

class Engine
{
private:
	Word word;
	int _length;
public:
	Engine(Word wo);
	bool checkLetter(char lett);
};
