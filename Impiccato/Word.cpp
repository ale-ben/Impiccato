#include "word.h"



Word::Word()
{
	
}

Word::Word(string w)
{
	word = w;
}

char Word::getLetter(int lNum)
{
	return (word[lNum]);
}

int Word::getWordLength()
{
	return (word.length());
}
