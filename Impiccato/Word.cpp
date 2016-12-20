#include "word.h"



Word::Word()
{
	cout << "Input the word, be carefull not to be spied: ";
	cin >> word;
	system("CLS");
}

Word::Word(string wSet)
{
	word = wSet;
}

char Word::getLetter(int lNum)
{
	return (word[lNum]);
}

int Word::getWordLength()
{
	return (word.length());
}
